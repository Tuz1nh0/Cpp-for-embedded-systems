#ifndef FPGAINTERFACE_H
#define FPGAINTERFACE_H

#include "UserInterface.h"
#include "OLED.h"

class FPGAInterface : public UserInterface {
    public:
        FPGAInterface();
        void display(string clkcal) override;
};

#endif