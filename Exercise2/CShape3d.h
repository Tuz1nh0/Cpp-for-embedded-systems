#include <iostream>

class CShape3d {
    public:
        CShape3d();
        virtual float volume() const = 0;
        virtual ~CShape3d();
};