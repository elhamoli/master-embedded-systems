#include <stdio.h>

int main() {
    char x;
    float y,z;
    printf("enter an operator + or - or * or /: ");
    scanf("%c",&x);
    printf("enter two operands: ");
    scanf("%f",&y);
    scanf("%f",&z);

    switch (x)
   { case '+':
    printf("%f + %f= %f",y,z,y+z);
    break;
     case '-':
    printf("%f - %f= %f",y,z,y-z);
    break;
     case '*':
    printf("%f * %f= %f",y,z,y*z);
    break;
     case '/':
    printf("%f / %f= %f",y,z,y/z);
    break;
    default:
    printf("wrong operator enterded");
    break;}
    
    return 0;
}
