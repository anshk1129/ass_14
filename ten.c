#include<stdio.h>
void copy(int arr[],int n);
int main(){
int arr[10];
int n=10;
printf("Enter %d elements\n",n);
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Array elements are\n");
for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
copy(arr,n);
return 0;
}
void copy(int arr[],int n){
    int a[10];
    for(int i=0;i<n;i++){
        a[i]=arr[i];
    }
    printf("\nCopying array elements are\n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}