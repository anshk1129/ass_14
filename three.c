#include<stdio.h>
void cal_ev_od(int arr[],int n);
int main(){
    int n=10,arr[10];
printf("Enter the 10 elements in array\n");
for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
}
cal_ev_od(arr,n);
return 0;
}
void cal_ev_od(int arr[],int n){
    int sum_ev=0,sum_od=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        sum_ev=sum_ev+arr[i];
        else
        sum_od=sum_od+arr[i];
    }
    printf("The sum of even numbers is %d",sum_ev);
    printf("\nThe sum of even numbers is %d",sum_od);

}