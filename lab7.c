#include <stdio.h>

enum Genres {
    GENRE_CLASSIC,
    GENRE_POP,
    GENRE_ROCK,
    GENRE_RAP,
    GENRE_NEWEDGE,
    GENRE_ELECTRO,
};

struct Triangle {
    int a, b, c;
};

void Perim(struct Triangle A) {
    int res;
    res = A.a + A.b + A.c;
    printf("P = %d\n", res);

}



int main() {
    //1
    enum Genres a, b, c, d, e, f;
    a = GENRE_CLASSIC;
    b = GENRE_POP;
    c = GENRE_ROCK;
    d = GENRE_RAP;
    e = GENRE_NEWEDGE;
    f = GENRE_ELECTRO;
    printf("%d\n", c);

    //2
    struct Triangle A = {1, 2, 3};
    Perim(A);


    //3
    union {
        unsigned int flags;
        struct {
            unsigned int ready: 1;
            unsigned int lesstToner: 1;
            unsigned int record: 1;
        };
    } lazer;

    scanf("%x", &lazer.flags);

    if (lazer.ready)printf("ready - on\n");
    else printf("ready - off\n");

    if (lazer.lesstToner) printf("less toner - on\n");
    else printf("less toner - off\n");

    if (lazer.record) printf("record - on\n");
    else printf("record - off\n");


    return 0;
}
