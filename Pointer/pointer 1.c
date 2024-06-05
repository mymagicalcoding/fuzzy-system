//solution 1
#include<stdio.h>
int swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x = 10, y = 20;
    printf("Before Swapping:\n%d  %d\n", x,y);
    swap(&x, &y);
    printf("After Swapping:\n%d %d\n", x,y);
}
