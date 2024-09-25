#include <stdio.h>
int main()
{
    int x , y ;
    printf("enter x= ");
    scanf("%d",&x);
    printf("enter y= ");
    scanf("%d",&y);
    x = x + y;
    y = x - y;
    x = x - y;

    printf("After Swapping: x = %d, y = %d", x, y);

    return 0;
}
