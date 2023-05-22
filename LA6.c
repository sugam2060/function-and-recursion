#include<stdio.h>


int fibo(int a,int b){
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    arr[0]=a;
    arr[1]=b;
    printf("%d %d ",a,b);
    for(i=0;i<n;i++){
        arr[i+2]=arr[i]+arr[i+1];
        printf("%d ",arr[i+2]);
    }



}

int main(){
    
    fibo(0,1);
    return 0;

}