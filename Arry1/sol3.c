/*Write a program that takes ten float numbers from the keyboard and put them into an array. Then,
it takes another number and checks if this number is present in the array or not.
a. If it is present, the program displays “Number found” and the number of times it appears in
the array.
b. If it is not present, the program displays “Number not found”.
Note: This is called “Searching”*/
#include<stdio.h>
int main()
{
    int i;
    float number[10];
    for(i=0;i<10;i++)
    {
        scanf("%f", &number[i]);
    }
    float n;
    printf(" Enter another number:");
    scanf ("%f", &n);
    int f=0,count=0;
    for(i=0;i<10;i++)
    {
        if(n==number[i])
        {
            f=1;
            count++;
        }
    }if(f==1)
    {
        printf("Number  found\n");
        printf("The number was found %d times",count);
    }else {printf("Number not found");}
}
