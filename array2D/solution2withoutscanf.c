#include<stdio.h>
int main()
{
    int  result[2][2];
    int i,j,k,sum=0;
   int first[2][3]={{1,2,3},{4,5,6}};
  int   second[3][2]={{1,2},{3,4},{5,6}};
    printf("the result matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {  result[i][j]=0;
            for(k=0;k<3;k++)
                result[i][j] += first[i][k] * second[k][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
             printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
