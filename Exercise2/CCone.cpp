#include "CCone.h"

CCone::CCone(float r, float h) : r(r), h(h){
}

float CCone::volume() const {
    return (1.0f/3.0f)*pi*r*r*h;
}