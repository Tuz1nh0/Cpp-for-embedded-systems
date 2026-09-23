#include "testmod.h"
#include "irqmp.h"
#include "gptimer.h"

struct irqmp *irqmp_base;
static volatile int irqtbl[18];

irqhandler(int irq) {
    irqtbl[irqtbl[0]] = irq + 0x10;
    irqtbl[0]++;
}

void init_irqmp(struct irqmp *lr) {
    lr->irqlevel = 0;       /* clear level reg */
    lr->irqmask = 0x0;      /* mask all interrupts */
    lr->irqclear = -1;      /* clear all pending interrupts */
    irqtbl[0] = 1;	        /* init irqtable */
}
	
int irqtest(int addr) {        
    int i, a, psr, nctrl, ctrl;
    volatile int marr[4];
    volatile int larr[4];
    struct irqmp *lr = (struct irqmp *) addr;
    irqmp_base = lr;

    report_device(0x0100d000);
    init_irqmp(lr);

    for (i=1; i<16; i++) catch_interrupt(irqhandler, i);

    nctrl = ((lr->asmpctrl >> 28) & 0xFF) + 1;

    for (ctrl = 0; ctrl < nctrl; ctrl++) {
        lr = (struct irqmp *) (addr + 0x1000*ctrl);
        
        if (nctrl > 1) report_subtest(ctrl);
        
        if (ctrl) {
                /* This controller has not yet been initialized */
                init_irqmp(lr);
                /* Assign processor 0 to this controller */
                lr->icsel0 = ctrl << 28;
                if (((lr->icsel0 >> 28) & 0xFF) != ctrl) fail(18);
        }

        /* test that interrupts are properly prioritised */
        
        lr->irqforce = 0x0fffe;	/* force all interrupts */
        if (lr->irqforce != 0x0fffe) fail(1); /* check force reg */

        lr->irqmask = 0x0fffe;	  /* unmask all interrupts */
        if (lr->irqmask != 0x0fffe) fail(2); /* check mask reg */
        while (lr->irqforce) {};  /* wait until all iterrupts are taken */

        /* check that all interrupts were take in right order */
        if (irqtbl[0] != 16) fail(3);
        for (i=1;i<16;i++) { if (irqtbl[i] != (0x20 - i))  fail(4);}
    }
}   