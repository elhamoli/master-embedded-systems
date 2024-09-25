#include <stdio.h>
int main() {
    int x,fact=1;
    printf("enter an integer: ");
    scanf("%d",&x);
    if(x>=0)
    {int i;
    for(i=1;i<=x;i++)
    fact*=i;
    printf("factorial = %d",fact);
    }
    else printf("error!! factorial of negative number does not exist");
    return 0;
}
