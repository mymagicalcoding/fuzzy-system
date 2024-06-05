/*Write a C program that takes 5 numbers (integer) from the keyboard and puts them in an array.
Afterwards, it displays all the prime numbers from the array.
[NOTE: need to use nested loops]*/
#include<stdio.h>
int main()
{
    int num[5];
    int i,j,n,f;
    for(i=0;i<5;i++)
    {
        scanf("%d", &num[i]);}printf("The prime numbers are:");

      for(i=0;i<5;i++)
      {f=0;n=num[i];
      for(j=2;j<n;j++)
      {
          if(n%j==0)
          {
              f=1;
              break;
          }
      } if(f==0 && n>1)
      printf(" %d",n);}
    }

