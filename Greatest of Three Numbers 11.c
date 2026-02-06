#include <stdio.h>

int main() {
    int a, b, c;

   
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    
    if (a > b && a > c) {
       
        printf("%d is the greatest\n", a);
    } else if (b > a && b > c) {
        printf("%d is the greatest\n", b);
    }
    else if (c > a && c > b) {
        
        printf("%d is the greatest\n", c);
    } else
        
    {
       
        printf("There is a tie for the greatest number\n");
    }

    return 0;
}
