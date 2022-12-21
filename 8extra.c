#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, n, k;
    char len;
    printf("string size: ");
    scanf("%d", &n);

    len = getchar();

    if (n > 0) k = n+1;
    else return -1;
    char * a = (char*) malloc(sizeof(char) * k);
    if (!a) return -1;

    i = 0;
    k = 1;
    printf("Input your string here:\n");
    while (k > 0)
    {
        len = getchar();
        if (len != '\n' && i < n) a[i++] = len;
        else a[i] = k = 0;
    }
    
    free(a);
    return 0;
}
