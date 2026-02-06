#include <stdio.h>

int main() {
    int n;
   
    if (scanf("%d",&n) != 1) return 0;

    int mid = n / 2;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            
            if (i == j || (i+j == n-1) || i==mid || j==mid) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
