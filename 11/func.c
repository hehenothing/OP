#include "header.h"
#include "math.h"

float a(struct Romb *romb){
    return sqrt(pow(romb -> ax - romb->bx, 2) + pow(romb -> ay - romb -> by, 2));
}

float d1(struct Romb *romb){
    return sqrt(pow(romb -> ax - romb -> cx, 2) + pow(romb -> ay - romb -> cy, 2));
}

float d2(struct Romb *romb){
    return sqrt(pow(romb -> bx - romb -> dx, 2) + pow(romb -> by - romb -> dy, 2));
}

float Perim(struct Romb *romb) {
    return a(romb) + a(romb) + a(romb) + a(romb);
}

float Square(struct Romb *romb) {
    return d1(romb) * d2(romb) * 1/2;
}
