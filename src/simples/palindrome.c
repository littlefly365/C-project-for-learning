#include <stdio.h>
#include <string.h>

int main(void) {
    char word[101], backed[101];
    printf("write a word (max 100 letters): ");
    fflush(stdout);
    scanf("%100s", word);

    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        backed[i] = word[len - i - 1];
    }
    backed[len] = '\0';

    if (strcmp(word, backed) == 0) {
        printf("The word is palindrome!\n");
    } else {
        printf("The word is not palindrome.\n");
    }

    printf("Original: %s\n", word);
    printf("Reversed: %s\n", backed);

    return 0;
}
