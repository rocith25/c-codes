#include <stdio.h>
int main ()
{
float a,b,c,d,e,f,bg,tf,tax,ttf;
    scanf("%f%f",&a,&b);
     scanf("%f%f",&c,&d);
     scanf("%f%f",&e,&f);
     scanf("%f",&bg);
     tf = ((a*b)+(c*d)+(e*f));
    printf("Total (Before Tax): %.2f\n",tf);
    tax = (tf*10/100);
    ttf = tax + tf;
    printf("Total (After Tax): %.2f\n",ttf);
    if(bg>tf){
        printf("Within Budget");
    }else
        printf("Over Budget");
    
    
     return 0;
}
