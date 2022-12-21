#include <stdio.h>
#include <stdlib.h>

int NOD (int a, int b) {
    int c;
    while (a != b) {
        if (a > b) {
            c = abs(a - b);
            a = c;
        }
        else {
            c = abs(b - a);
            b = c;
        }
    }
    return a;
}

int NOK (int a, int b) {
    return a * b / NOD(a, b);
}

void Delete(char *str) {
    while (*str != '\0') {
        if (*str == ' ' && *(str + 1) == ' ') {
            for (int i = 0; str[i] != '\0'; i++) str[i] = str[i + 1];
            Delete(str);
            return;
        }
        else if ((*str == '[' || *str == '('|| *str == '{') && *(str + 1) == ' ') {
            for (int i = 0; str[i] != '\0'; i++) str[i] = str[i + 1];
            Delete(str);
            return;
        }
    }

}
int main () {
    //1
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d\n", NOD(num1, num2));
    printf("%d\n", NOK(num1, num2));

    //5
    char str[30];
    fgets(str, 30, stdin);
    Delete(str);
    puts(str);

    return 0;
}
