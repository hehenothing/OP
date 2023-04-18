//
// Created by Павел on 18.04.2023.
//

#ifndef LAB_4_LINE_HH
#define LAB_4_LINE_HH

#include "IGeoFig.hh"
#include "BaseCObject.hh"
#include "Vector2D.hh"
#include "IPrintable.hh"
#include "IPhysObject.hh"

namespace figure {
    class line : public IGeoFig, IPhysObject, IPrintable, BaseCObject {
        Vector2D a, b;
        float m;
    public:
        explicit line(float a_x, float a_y, float b_x, float b_y);

        float mass() override;

        Vector2D position() override;

        float square() override;

        float perimeter() override;

        void draw() override;

        bool operator==(IPhysObject &ob) const override;

        bool operator<(IPhysObject &ob) const override;

        unsigned int size() override;

        const char *classname() override;
    };
}
#endif //LAB_4_LINE_HH
