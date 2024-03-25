#include <stdio.h>

int main() {
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    int w =  p == &i;
    int x =  *p - *q;
    int y =  **&p;
    int z =  3 - *p/(*q) + 7;

    printf("O valor de p==&i = %d\n", w);
    printf("O valor de *p - *q = %d\n", x);
    printf("O valor de **&p = %d\n", y);
    printf("O valor de 3 - *p/(*q) + 7 = %d\n", z);

    return 0;
}