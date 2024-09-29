#include<stdio.h>
int main(){

    int a[100],i,x,y,j;
    printf("enter no. of elements(max=100): ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    printf("%d ",a[i]=i+1);
    printf("\n");
    printf("enter the element to be inserted: ");
    scanf("%d",&y);
    printf("enter the location: ");
    scanf("%d",&j);
    a[j-1]=y;
     for(i=0;i<x;i++)
    printf("%d ",a[i]);

    return 0;
}