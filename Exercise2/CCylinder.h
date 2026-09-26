#include <iostream>
#include "CShape3d.h"
//APRIMORAR PRA USAR TEMPLATE VISTO EM AULA
class CCylinder : public CShape3d {
    private:
        float r, h;
        float pi = 3.14;
    public:
        CCylinder(float r, float h);
        float volume() const override;
};