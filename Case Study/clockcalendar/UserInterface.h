#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <string>

using namespace std;

class UserInterface {
    protected:
        string clkcal;
    public:
        UserInterface();
        virtual void display(string clkcal);
        virtual ~UserInterface();
};

#endif