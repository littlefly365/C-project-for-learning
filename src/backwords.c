#include <stdio.h>
#include <string.h>

int main(void) {
   char word[101];
   printf("write a word, the limit are 100 letters: ");
   fflush(stdout);
   scanf("%100s", word);
   int num = strlen(word);
   int len = num - 1;
   printf("\n");
   while (len >= 0) {
     printf("%c", word[len]); 
     len--;
    }
   return 0;
}

