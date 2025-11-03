//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int freq[26] = {0}; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safely read input

  
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // increase frequency
            if (freq[str[i] - 'a'] == 2) {  // first time repetition
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
