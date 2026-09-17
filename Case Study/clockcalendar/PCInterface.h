#ifndef PCINTERFACE_H
#define PCINTERFACE_H

#include "UserInterface.h"

class PCInterface : public UserInterface {
    public:
        PCInterface();
        void display(string clkcal) override;
};

#endif