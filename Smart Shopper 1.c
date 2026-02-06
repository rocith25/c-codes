#include <stdio.h>

int main() {
    int c1, q1, c2, q2, c3, q3;
        
    int budget;
    double totalBeforeTax:
    double totalAfterTax:
   
    if(scanf("%d %d", &c1, &q1)!=2);
    if (scanf("%d %d", &c2, &q2)!= 2);
    if(scanf("%d %d", &c3, &q3) !=2);
    if(scanf("%d",&budget)!= 1);

   
    totalBeforeTax =(double)(c1* q1+c2 *q2+ c3* q3);
    totalAfterTax= totalBeforeTax*1.10;

    
    printf("Total Before Tax):%.2f\n", totalBeforeTax);
    printf("Total After Tax): %.2f\n",totalAfterTax);

   
    if (totalAfterTax <= (double)budget)
    
    
    {
        printf("Within Budget\n");
    } 
        else {
        printf("Over Budget\n");
    }

    return 0;
}
