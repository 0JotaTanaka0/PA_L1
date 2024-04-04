#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i;

    char x1[4];
    printf("x declarado como char:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x1+i);
    }

    int x2[4];
    printf("\nx declarado como int:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x2+i);
    }

    float x3[4];
    printf("\nx declarado como float:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x3+i);
    }
    
    double x4[4];
    printf("\nx declarado como double:\n");
    for (i = 0; i < 4; i++) {
        printf("x + %d = %x\n", i+1, x4+i);
    }
}

//Respostas:
// x declarado como char:
// x + 1 = 61ff18
// x + 2 = 61ff19
// x + 3 = 61ff1a
// x + 4 = 61ff1b

// x declarado como int:
// x + 1 = 61ff08
// x + 2 = 61ff0c
// x + 3 = 61ff10
// x + 4 = 61ff14

// x declarado como float:
// x + 1 = 61fef8
// x + 2 = 61fefc
// x + 3 = 61ff00
// x + 4 = 61ff04

// x declarado como double:
// x + 1 = 61fed8
// x + 2 = 61fee0
// x + 3 = 61fee8
// x + 4 = 61fef0