#include <stdio.h>
int cal_great(int arr[], int n);
int main()
{
    int n = 10, arr[10];
    printf("Enter the 10 elements in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The greatest number is %d", cal_great(arr, n));
    return 0;
}
int cal_great(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}