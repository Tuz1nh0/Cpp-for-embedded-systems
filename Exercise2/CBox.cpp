#include "CBox.h"

CBox::CBox(float x, float y, float z) : x(x), y(y), z(z) {
}

float CBox::volume() const {
    return x*y*z;
}