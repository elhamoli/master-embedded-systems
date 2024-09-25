#include <stdio.h>
int main() {
    char x;
    printf("enter a character: ");
    scanf("%c",&x);
    if(x>=65 & x<=90)
        printf("%c is a capital alphabet",x);
    else if (x>=97 & x<=122)
        printf("%c is an small alphabet",x);
    else
    printf("%c is not an alphabet",x);

    return 0;
}