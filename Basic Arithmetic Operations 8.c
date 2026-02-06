#include <stdio.h>
int main() {

    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    
    int sum = a+b;
    int difference=a-b;
    int product=a*b;       
    int remainder=a%b;       
    
    
    printf("Sum:%d\n",sum);
    printf("Difference:%d\n",difference);
    printf("Product:%d\n",product);
    printf("Remainder:%d\n",remainder);
    
    return 0;
}

