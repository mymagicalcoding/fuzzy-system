/*Write a program that creates a 5-element integer array to store marks of 5 students for Mid I exam.
Assign 5 values in the array and finally, show the total and average marks obtained by the
students.*/
#include<stdio.h>
int main()
{
    int i,avg,sum;
    int mark[]={70,80,40,60,90};
    for(i=0,sum=0;i<5;i++)
    {
        sum+=mark[i];
        avg=sum/5;
    }
    printf("Total mark is %d and The average is %d", sum,avg);
}
