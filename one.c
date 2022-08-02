#include<stdio.h>
int main(){
int n=10,arr[10];
printf("Enter the 10 elements in array\n");
for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
}
printf("the sum is %d ",cal_sum(arr,0,n));
return 0;
}
int cal_sum(int arr[],int i,int n){
  if(i<n){
    int sum=arr[i];
    int ar=cal_sum(arr,i+1,n);
    return sum+ar;
  }
  else
  return 0;
}