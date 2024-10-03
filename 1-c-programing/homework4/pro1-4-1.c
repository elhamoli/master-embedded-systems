#include<stdio.h>
void fun(int a , int b){ 

    int i,f,e;
        printf("prime numbers between %d and %d are: ",a,b);

    for (i=a+1;i<b;i++)
    {
        for(f=2;f<i/2;f++)
           { if(i%f==0)
          { e=0;
            break;}}

        
        if(e)
        printf(" %d ",i);}

    }

int main (){
    int x,y ;
    printf("enter two numbers intervals : ");
    scanf("%d %d",&x,&y);
    fun(x,y);

return 0;
}