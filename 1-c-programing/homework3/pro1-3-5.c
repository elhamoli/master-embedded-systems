#include<stdio.h>
int main(){
int a[100],x,i;
printf("enter no. of elements: ");
scanf("%d",&x);
for(i=0;i<x;i++)
printf("%d ",a[i]=(i+1)*11);
printf("\nenter elements to be searched= ");
scanf("%d",&x);
printf("number found at location= %d",a[x-1]);

    return 0;
}