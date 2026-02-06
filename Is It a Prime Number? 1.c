#include <stdio.h>

int main() {
    int N;
      scanf("%d", &N);

    if(N<=1){
        printf("Not Prime\n");
        return 0;
    }
     is_prime=true;
    for(inti=2;i<=sqrt;i++) 
    {
        if(N%i==0) 
        {
            is_prime=false;
            break;
        }
    }
    if (is_prime) {
        printf("Prime+\n");
    } else 
    {
        printf("Not Prime\n");
    }
    return 0;
}
