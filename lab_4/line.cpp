#include "line.hh"
#include <cmath>
#include <iostream>

namespace figure {
    line::line(float a_x, float a_y, float b_x, float b_y) {
        this->a.x = a_x;
        this->a.y = a_y;
        this->b.x = b_x;
        this->b.y = b_y;
    }

    float line::perimeter() {
        return sqrtf(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
    }

    float line::square() {
        return 0;
    }

    Vector2D line::position() {
        auto centre = new Vector2D();
        centre->x = (a.x + b.x) / 2;
        centre->y = (a.y + b.y) / 2;
        return *centre;
    }

    void line::draw() {
        printf("Square = %f\nPerimeter = %f\n", square(), perimeter());
    }

    float line::mass() {
        return m;
    }

    bool line::operator==(IPhysObject &ob) const {
        return (m == ob.mass());
    }

    bool line::operator<(IPhysObject &ob) const {
        return (m < ob.mass());
    }

    unsigned int line::size() {
        return sizeof(line);
    }

    const char *line::classname() {
        return "line";
    }
}