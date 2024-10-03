#include<stdio.h>
void fact(int a)
{
    int i,fac=1;
    for(i=a;i>1;i--)
    {
        fac*=i;
    }
    printf("factorial of %d= %d",a,fac);

}
void main()
{
    int n;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    if (n < 0) 
        printf("Error: Factorial is not defined for negative numbers.\n");
        else 
        fact(n);

}