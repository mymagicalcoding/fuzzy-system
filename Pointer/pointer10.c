#include <stdio.h>
int count_occurrences(int *arr, int n, int num)
{
    int count = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        if(*(arr+i) == num)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int n = sizeof(arr)/ sizeof(arr[0]) ;
    int num = 2;

    int count = count_occurrences(arr, n, num);
    printf("Number %d occurs %d times in the array.\n", num, count);

    return 0;
}
