#include<stdio.h>
#include<conio.h>

int fibo(int m);
int fibo(int m){
    if (m==0){
        return 0;
    }
    if (m==1){
        return 1;
    }
    int f=fibo(m-1)+fibo(m-2);
    return f;
}
int main(){
    printf("Enter a number whose fibonnaci series you want:");
    int x;
    scanf("%d",&x);
    printf("the fibonnaci series is %d",fibo(x));
    return 0;
}