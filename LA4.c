#include<stdio.h>


int power(int x,int y){
    int i,w=1;
    for(i=1;i<=y;i++){
        w=w*x;
    }
    return w;
}
int main(){
    int x=5,y=2;
    int po=power(x,y); 

    printf("%d^%d is %d",x,y,po);

    return 0;
}