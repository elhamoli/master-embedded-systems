#include <stdio.h>
int main() {
    float x,y,z;
    printf("enter a number: ");
    scanf("%f",&x);
    if(x>0)
    printf("the number is positive");
    else if (x<0)
    printf("the number is negative");
    else
    printf("the number is zero");

    return 0;
}
