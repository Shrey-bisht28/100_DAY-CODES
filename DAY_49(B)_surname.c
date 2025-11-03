//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

  
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    i = 0;

    while (i < lastSpace) {
        if (i == 0 && name[i] != ' ') {
            printf("%c ", name[i]); 
        }
        if (name[i] == ' ' && name[i + 1] != ' ' && i + 1 < lastSpace) {
            printf("%c ", name[i + 1]); 
        }
        i++;
    }


    if (lastSpace != -1) {
        printf("%s", &name[lastSpace + 1]);  
    }

    return 0;
}
