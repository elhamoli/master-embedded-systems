#include <stdio.h>
int main (){
    int a[10][10],b[10][10];
    int r,c,i,j;
    printf("enter numbers of collums and rows (max 10*10)=");
    scanf("%d %d",&r, &c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter data of a%d%d=",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("the array you entered is a%d%d =\n",r,c);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
printf("the transpose is a%d%d =\n",c,r);
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        if(j==r-1)
        printf("\n");}
    }
    return 0;
}