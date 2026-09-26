#include "CCylinder.h"

CCylinder::CCylinder(float r, float h) : r(r), h(h){
}

float CCylinder::volume() const {
    return pi*r*r*h;
}