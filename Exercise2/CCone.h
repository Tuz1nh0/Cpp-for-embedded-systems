#include <iostream>
#include "CShape3d.h"
//APRIMORAR PRA USAR TEMPLATE VISTO EM AULA
class CCone : public CShape3d {
    private:
        float r, h;
        float pi = 3.14;
    public:
        CCone(float r, float h);
        float volume() const override;
};