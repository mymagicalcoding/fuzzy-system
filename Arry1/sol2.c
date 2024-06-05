/*Write a program that creates a 5-element integer array to store marks of 5 students for Mid I exam.
Then, it takes 5 values from the keyboard and put them in the array. Finally, it shows the total and
average marks obtained by the students.*/

#include<stdio.h>
int main()
{
    int i,avg,sum;
    int mark[5];
    printf("Enter the mark:");
    for(i=0;i<5;i++)
    {
        scanf("%d", &mark[i]);
    }
    for(i=0,sum=0;i<5;i++)
    {
        sum+=mark[i];
        avg=sum/5;
    }
    printf("Total mark is %d and The average is %d", sum,avg);
}
