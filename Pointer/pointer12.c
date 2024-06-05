#include <stdio.h>
int  array_copy(int *source, int *target, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        *(target + i) = *(source + i);
    }
}

int main()
{
    int source[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    int target[n];

    array_copy(source, target, n);

    printf("The target array elements are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", target[i]);
    }

    return 0;
}
