#include <stdio.h>
int power(int n1,int n2);
int main (){
    int base ,exp;
    printf("enter base number: ");
    scanf("%d",&base);
    printf("enter power number (positive interger): ");
    scanf("%d",&exp);
    printf("%d^%d=%d",base,exp,power(base,exp));
    return 0;
}
int power(int base,int exp)
{
   
    if(exp!=0)
        return(base*power(base,exp-1));
    
    else return 1;
}