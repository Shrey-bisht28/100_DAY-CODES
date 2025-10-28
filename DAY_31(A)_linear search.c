//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, key;
    int found = 0; 

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            printf("Element %d found at position %d\n", key, i+1); // i+1 for position
            break; 
        }
    }

    if(!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
