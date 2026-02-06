#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n, i = 2, isPrime = 1;

    scanf("%d", &n);

    if (n <= 1) {
        printf("NO");
        return 0;
    }

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
        printf("YES");
    else
        printf("NO");

    return 0;
} 
   
