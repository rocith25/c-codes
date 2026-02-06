#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j;

    
    printf("Enter an odd integer N for the height of the diamond: ");
    scanf("%d", &N);

    
    if (N % 2 == 0 || N <= 0) {
        printf("Invalid input: Please enter a positive odd integer.\n");
        return 1;
    }

    int half = N / 2;

    
    for (i = 0; i <= half; i++) {
        for (j = 0; j < N; j++) {
            
            if (j == half - i || j == half + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    
    for (i = half - 1; i >= 0; i--) {
        for (j = 0; j < N; j++) {
            
            if (j == half - i || j == half + i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


