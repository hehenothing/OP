#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *file = fopen("test.txt", "w");
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    fprintf(file, "you added %d", num1 + num2);

    fclose(file);

    return 0;
}
