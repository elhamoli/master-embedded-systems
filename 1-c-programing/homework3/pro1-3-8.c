#include<stdio.h>
#include<string.h>
int main(){
    char c[1000],a;
    int i,j=0;
    printf("enter string: ");
    gets(c);
    j=strlen(c)-1;
    for(i=0;i<j;i++&j--)
    {
        a=c[i];
        c[i]=c[j];
        c[j]=a;

    }
    printf("\nreverse string is: %s",c);
    

    return 0;
}