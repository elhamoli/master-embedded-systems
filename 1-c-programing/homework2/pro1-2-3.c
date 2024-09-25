#include <stdio.h>

int main() {
    float x,y,z;
    printf("enter three numbers: ");
    scanf("%f",&x);
    scanf("%f",&y);
    scanf("%f",&z);
    
    if(x>=y & x>=z)
    printf("the largest number is %f",x);
    else if (y>=x & y>=z)
    printf("the largest number is %f",y);
    else
    printf("the largest number is %f",z);
    return 0;
}