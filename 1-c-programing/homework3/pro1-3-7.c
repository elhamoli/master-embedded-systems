#include<stdio.h>
int main(){
    char c[1000];
    int i,x=0;
    printf("enter string: ");
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        x++;
    }
    printf("lenght of the string :%d",x);


    return 0;
}