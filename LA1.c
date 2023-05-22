#include<stdio.h>

int swapfucn(int a,int b){
    printf("\nbefore swap a = %d, b = %d",a,b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("\nafter swap a = %d, b = %d",a,b);
}
int main(){
    swapfucn(2,4);

    return 0;
}