#include <stdio.h>
#include "header.h"
int main() {
    int ax, ay, bx, by, cx, cy, dx, dy;
    scanf("%d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy);
    struct Romb *romb = {ax, ay, bx, by, cx, cy, dx, dy};

    printf("%f\n", Perim(&romb));
    printf("%f\n", Square(&romb));
    
    return 0;
}
