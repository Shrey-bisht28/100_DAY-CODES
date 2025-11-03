//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
       
        while (str[i] == ' ' || str[i] == '\n') {
            i++;
        }
        start = i;

       
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        end = i - 1;

        
        int left = start, right = end;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }

    printf("Sentence with reversed words: %s", str);

    return 0;
}
