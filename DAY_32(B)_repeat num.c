//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; 
    int i, maxCount = 0, mostDigit;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

   
    if(num < 0) {
        num = -num;
    }

   
    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

   
    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            mostDigit = i;
        }
    }

    printf("The digit %d occurs the most (%d times).\n", mostDigit, maxCount);

    return 0;
}
