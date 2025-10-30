#include <stdio.h>

int main(void) {
    int a;
    printf("even or odd initialized\n");
    printf("type a number: ");

    if (scanf("%d", &a) != 1) {
        printf("invalid input\n");
        return 1;
    }

    if (a % 2 == 0)
        printf("its an even number\n");
    else
        printf("its an odd number\n");

    return 0;

}
