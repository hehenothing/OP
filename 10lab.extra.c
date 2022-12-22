#include <stdio.h>
#include <stdlib.h>

long long Factorial(long long N) {
    long long F = 1;

    for(int i = 1; i <= N; ++i) {
        F *= i;
    }

    return F;
}
long long Factorial_rec(long long N) {

    if(N == 0) return 1;
    if(N == 1) return 1;
    return N * Factorial(N - 1);
}

int main () {
    long long N;
    N = 50;

    if (N >= 0) {
        printf("Factorial = %d\n", Factorial(N));
        printf("Factorial = %d\n", Factorial_rec(N));
    }
    else {
        printf("Error\n");
    }

    return 0;
}
