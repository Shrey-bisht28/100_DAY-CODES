//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, length = 0, maxLength = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            length++; 
        } else {
            if (length > maxLength) {
                maxLength = length;   
                maxStart = start;     
            }
            length = 0;             
            start = i + 1;           
        }
        i++;
    }

   
    if (length > maxLength) {
        maxLength = length;
        maxStart = start;
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
