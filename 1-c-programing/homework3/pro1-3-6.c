#include<stdio.h>
int main(){
    char c[1000],ch;
    int i,x=0;
    printf("enter string: ");
    gets(c);
    printf("enter a charecter to find frq: ");
    scanf("%c",&ch);
    for(i=0;c[i]!='\0';i++)
    {
        if (ch==c[i])
        x++;
    }
    printf("frq :%d",x);


    return 0;
}