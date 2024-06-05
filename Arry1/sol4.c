/*Ten numbers are entered from the keyboard into an array. Write a program to find out how many
of them are positive, how many are negative, how many are zero. For positive numbers, show how
many of them are even and how many are odd.*/
#include<stdio.h>
int main()
{
    int i, number[10];
    printf("Enter the numbers");
    for (i=0;i<10;i++)
    {
        scanf ("%d", &number[i]);
    }
    int poscount=0,negcount=0,evencount=0,oddcount=0,zerocount=0;
    for(i=0;i<10;i++)
    {
        if(number[i]>0)
        {
            poscount++;
            if(number[i]%2==0)
            {
                evencount++;}
                else{oddcount++;}

        }else if(number[i]<0){negcount++;}
        else{zerocount++;}
    }printf("There are %d positive numbers\nThere are %d even numbers\nThere are %d odd numbers\nThere are %d negative numbers\nThere are %d zeros",poscount,evencount,oddcount,negcount,zerocount);
}
