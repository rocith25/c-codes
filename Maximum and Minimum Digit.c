#include <stdio.h>

int main() {
    long long n;
    
    if (scanf("%lld",&n)!=1) {
        return 0;
    }
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        printf("0 0\n");
        return 0;
    }
    int max_digit = 0;
    int min_digit = 9;
    int digit;
    while (n > 0) {
        digit = n % 10;   
        if (digit > max_digit) {
            max_digit = digit;
        }
        if (digit < min_digit) {
            min_digit = digit;
        }
        n = n / 10; 
    }
    printf("%d %d\n", max_digit, min_digit);
    return 0;
}

