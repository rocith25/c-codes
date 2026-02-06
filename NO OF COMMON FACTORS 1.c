  #include <stdio.h>
int main()
{
int commonFactors(int a, int b) 
{  
    int count=0;
    int x;
    if(a>b)
    {
        x=b;
    }
    if(b>a)
    {
        x=a;
    }
    for(int i=1;i<=x;i++)
    {
        if(a%i==0 && b%i==0)
        {
           count++;
        }
    }
    return count;
}
