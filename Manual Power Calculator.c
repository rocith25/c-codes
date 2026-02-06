#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1; 
    int i;
    if(scanf("%d%d",&base,&exponent)!= 2) {    
        return 1;
    }
    for(i=0;i<exponent;++i) {
        result*=base;
    }
    printf("%lld\n",result);
    return 0;
}
