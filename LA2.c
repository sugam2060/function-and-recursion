#include<stdio.h>
// nCr = n!/(r!*(n-r)!)

int combination(int n,int r){
    int nCr,i,facta=1,factc=1,factb=1;
    // n!
    for(i=1;i<=n;i++){
        facta=facta*i;    
    }
    // r!
    for(i=1;i<=r;i++){
        factb=factb*i;
    }

    // (n-r)!
    for(i=1;i<=(n-r);i++){
        factc=factc*i;
    }
    nCr = facta/(factb*factc);
    return nCr;
}

int main(){
    
    printf("%d",combination(5,4));
    // 5;

    return 0;
}