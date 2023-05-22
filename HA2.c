#include<stdio.h>

int powseries(int x){
    int i,series=0,fact=1,j;
    for(i=1;i<=10;i++){
        for(j=1;j<=i;i++){
            fact=fact*j;
        }
        series=series+(x^i)/fact;
    }
    return (series = series +1);
}
int main(){
    printf("%d",powseries(10));

    return 0;
}