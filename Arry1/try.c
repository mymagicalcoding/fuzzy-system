#include<stdio.h>
int main()
{
    int i,j;float num[10],n;
    for(i=0;i<10;i++)
    {
        scanf("%f", &num[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(num[i]>num[j])
            {
                n=num[i];
                num[i]=num[j];
                num[j]=n;
            }
        }
    }printf("Array elements:");
    for(i=0;i<10;i++)
    {
        printf("%.2f ", num[i]);
    }
}
