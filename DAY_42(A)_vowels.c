//Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        ch = str[i];

      
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for consonants (alphabetic but not vowel)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
