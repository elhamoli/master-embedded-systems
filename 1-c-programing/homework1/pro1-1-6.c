#include <stdio.h>

int main() {
   int a,b,x;
   printf("Enter value of a: ");
   scanf("%d",&a);
    printf("Enter value of b: ");
   scanf("%d",&b);
   x=a;
   printf("After swapping, value of a = %d \n",a=b);
   printf("After swapping, value of b = %d",b=x);

    return 0;
}