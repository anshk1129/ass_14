#include <stdio.h>
int cal_small(int arr[], int n);
int main()
{
    int n = 10, arr[10];
    printf("Enter the 10 elements in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The smallest number is %d", cal_small(arr, n));
    return 0;
}
int cal_small(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}