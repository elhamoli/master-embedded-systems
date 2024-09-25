#include <stdio.h>
int main() {
    int x,sum;
    printf("enter an integer: ");
    scanf("%d",&x);
    int i;
    for(i=0;i<=x;i++)
    sum+=i;
    printf("sum = %d",sum);

    return 0;
}