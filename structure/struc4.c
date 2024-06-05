/*Write a C program that keeps the following student information in a structure
named Student_Info.
d) Student Name
e) Student Address
f) CGPA
The program creates an array of Student_Info named StdList of size 5. After
getting the students’ info from input, it calculates the average CGPA of the
students and displays the value.*/
#include<stdio.h>
struct std_info
{
    char name[50];
    char address[55];
    float cgpa;
};
void main()
{
    struct std_info emplist[5];
    int i; float avg,sum;

    for(i=0;i<5;i++)
    {
        printf("Enter the informations about student %d\n", i+1);
        scanf(" %s %s %f", emplist[i].name, emplist[i].address, &emplist[i].cgpa);
    }
    for(i=0,sum=0.0;i<5;i++)
    {
        sum+= emplist[i].cgpa;
    }
    avg=sum/5;
    printf("The avage salary of the employees is: %.2f", avg);
}

