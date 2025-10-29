#include <stdio.h>

int main(void){
    char numbers[4];
    int selection;
    int n = 0, n2 = 1, n3 = 2;

    printf("Type 3 numbers: ");
    scanf("%3s", numbers);

    printf("Do you want to order(1) or reverse(2)? ");
    scanf("%d", &selection);

    if (selection == 1) {
        if (numbers[n] <= numbers[n2] && numbers[n2] <= numbers[n3]) {
            printf("%c %c %c\n", numbers[n], numbers[n2], numbers[n3]);
        } else if (numbers[n] <= numbers[n3] && numbers[n3] <= numbers[n2]) {
            printf("%c %c %c\n", numbers[n], numbers[n3], numbers[n2]);
        } else if (numbers[n2] <= numbers[n] && numbers[n] <= numbers[n3]) {
            printf("%c %c %c\n", numbers[n2], numbers[n], numbers[n3]);
        } else if (numbers[n2] <= numbers[n3] && numbers[n3] <= numbers[n]) {
            printf("%c %c %c\n", numbers[n2], numbers[n3], numbers[n]);
        } else if (numbers[n3] <= numbers[n] && numbers[n] <= numbers[n2]) {
            printf("%c %c %c\n", numbers[n3], numbers[n], numbers[n2]);
        } else {
            printf("%c %c %c\n", numbers[n3], numbers[n2], numbers[n]);
        }
    } else if (selection == 2) {
        printf("%c %c %c\n", numbers[n3], numbers[n2], numbers[n]);
    } else {
        printf("Invalid selection\n");
    }

    return 0;
}