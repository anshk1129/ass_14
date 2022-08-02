
#include <stdio.h>
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)
for (j = 0; j < n-i-1; j++)
if (arr[j] > arr[j+1])
swap(&arr[j], &arr[j+1]);
}
int main()
{
int arr[10];
int n=10;
printf("Enter the array elements\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

bubbleSort(arr, n);
printf("The second smallest element is %d",arr[n-9]);
return 0;
}
