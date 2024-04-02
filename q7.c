#include <stdio.h>

int main() {
    int mat[4], *p, x;
    p = mat + 1;
    // p = mat;
    // x = (*mat);

    printf("Teste %d", *p);
    return 0;
}
