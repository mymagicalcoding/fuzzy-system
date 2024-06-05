/*Write a program that takes 10 float values from the keyboard and put them in an array. Then, it
sorts (in descending order) the values in the array.*/
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
            if(num[i]<num[j])
            {
                n=num[i];
                num[i]=num[j];
                num[j]=n;
            }
        }
    }printf("Array elements in descending order:");
    for(i=0;i<10;i++)
    {
        printf("%.2f ", num[i]);
    }
}

