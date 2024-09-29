#include <stdio.h>
void main (){
    float a[2][2] ,b[2][2];
    int i,j;
    printf("enter 1st matrix:\n");
    for (i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {printf ("enter a%d,%d :", i+1,j+1);
       scanf("%f",&a[i][j]); 
    }
    }
    printf("enter 2nd matrix:\n");
 for (i=0;i<2;i++)
    {for(j=0;j<2;j++)
    {printf ("enter b%d,%d :", i+1,j+1);
       scanf("%f",&b[i][j]); 
    }
    }

    printf("sum matrixs:\n");
for (i=0;i<2;i++)
    {for(j=0;j<2;j++)
 printf("%2.2f  ",a[i][j]+b[i][j]);
     printf("\n");

    }
} 