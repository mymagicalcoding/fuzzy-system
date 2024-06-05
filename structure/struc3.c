/*Write a C program that keeps the following employee information in a structure
named Emp_Info.
a) Employee Name
b) Employee Address
c) Salary
The program creates an array of Emp_Info named EmpList of size 4. After getting
the employee info from input, it calculates the average salary of the employees
and displays the value.*/
#include<stdio.h>
struct Emp_info
{
    char name[50];
    char address[55];
    float salary;
};
void main()
{
    struct Emp_info emplist[4];
    int i; float avg,sum;

    for(i=0;i<4;i++)
    {
        printf("Enter the informations about employee %d\n", i+1);
        scanf(" %s %s %f", emplist[i].name, emplist[i].address, &emplist[i].salary);
    }
    for(i=0,sum=0.0;i<4;i++)
    {
        sum+= emplist[i].salary;
    }
    avg=sum/4;
    printf("The avage salary of the employees is: %f", avg);
}
