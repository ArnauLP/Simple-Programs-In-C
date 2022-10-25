#include <stdio.h>

int main() {

    //Variable declarations
    int size;

    printf("INPUT\n");
    printf("SIZE (2-3)?\n");
    scanf("%d", &size);

    int t[size][size];

    int i = 0;
    int j = 0;
    //matrix read
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("POSITION(%d, %d)?\n", i, j);

            scanf("%d", &t[i][j]);
        }
    }
    int calc = 0;
    //calc matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            calc = calc + t[i][j];
        }
    }
    printf("suma: %d", calc);
    return 0;
}


