#include <stdio.h>

int main(void) {
    int numbers[3];
    int selection;

    printf("Type 3 numbers separated by spaces: ");
    if (scanf("%d %d %d", &numbers[0], &numbers[1], &numbers[2]) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Do you want to order(1) or reverse(2)? ");
    scanf("%d", &selection);

    if (selection == 1) {
        // orden ascendente (burbuja simple)
        for (int i = 0; i < 2; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (numbers[i] > numbers[j]) {
                    int tmp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = tmp;
                }
            }
        }
    } else if (selection == 2) {
        // orden descendente
        for (int i = 0; i < 2; i++) {
            for (int j = i + 1; j < 3; j++) {
                if (numbers[i] < numbers[j]) {
                    int tmp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = tmp;
                }
            }
        }
    } else {
        printf("Invalid selection\n");
        return 1;
    }

    printf("Result: %d %d %d\n", numbers[0], numbers[1], numbers[2]);
    return 0;
}
