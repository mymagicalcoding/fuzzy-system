/*Write a program that takes 5 integer values from the keyboard and finds the minimum and
maximum of the 5 values.*/
#include<stdio.h>
int main()
{
    int i, number[5];
    printf("Enter the numbers :");
    for(i=0;i<5;i++)
    {
        scanf("%d", &number[i]);
    }
    int max, min;
    max= number[0]; min=number[0];
    for(i=0;i<5;i++)
    {
        if(max<number[i])
        {
            max=number[i];
        }if(min>number[i])
        {
            min=number[i];
        }
    }printf("The maximum number is %d\nThe minimum number is %d",max,min);
}
