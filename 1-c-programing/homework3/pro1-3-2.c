#include <stdio.h>
void main (){
int i,x=0;
float a[100];
printf("enter numbers of data =");
scanf("%d",&x);
if(x>100||x<=0)
{printf("please enter number from 1 to 100 :");
scanf("%d",&x);
}
 for(i=0;i<x;i++){
    printf("enter number %d= ",i+1);
    scanf("%f",&a[i]);
}
for(i=0;i<x-1;i++)
    a[0]=a[0]+a[i+1];
    printf("average= %f",a[0]/x);
}