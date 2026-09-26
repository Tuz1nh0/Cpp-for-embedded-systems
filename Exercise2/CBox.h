#include <iostream>
#include "CShape3d.h"
//APRIMORAR PRA USAR TEMPLATE VISTO EM AULA
class CBox : public CShape3d {
    private:
        float x, y, z;
    public:
        CBox(float x, float y, float z);
        float volume() const override;
};