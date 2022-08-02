#include<stdio.h>
int main(){
int arr[100];
int n;
printf("Enter the number of elements you want to store in array(less than 100)\n");
scanf("%d",&n);
printf("Enter %d elements\n",n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Printing in reverse order\n");
for(int i=n-1;i>=0;i--)
printf("%d\n",arr[i]);
return 0;
}