#include <stdio.h>

int main() {
    long long N, originalN, temp;
    int digits = 0;
    long long sum = 0;

    if (scanf("%lld", &N) != 1) return 0;

    originalN = N;

   
    if (N == 0) {
        printf("true\n");
        return 0;
    }

    
    temp = N;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

   
    temp = N;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    
    if (sum == originalN) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
