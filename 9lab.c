#include <stdio.h>
#include <stdlib.h>

int main () {
    //1
    char mas[50];
    int Upper = 0, Lower = 0, Number = 0;

    gets(mas);

    for (int i = 0; i < sizeof(mas) / sizeof(char) - 1; ++i) {
        if (mas[i] <= '9' && mas[i] >= '0') Number += 1;
        else if (mas[i] <= 'z' && mas[i] >= 'a') Lower += 1;
        else if (mas[i] <= 'Z' && mas[i] >= 'A') Upper += 1;
    }
    printf("Numbers - %d, Lowercase - %d, Uppercase - %d\n", Number, Lower, Upper);

    //5
    int month = 0;
    float percent = 0, sum = 0, res = 0;
    scanf("%d", &month);
    scanf("%f", &percent);
    scanf("%f", &sum);

    for(int i = 0; i <= month; i++) {
        res = sum * (1 + percent) / month;
    }
    printf("%f", res);

    return 0;
}
