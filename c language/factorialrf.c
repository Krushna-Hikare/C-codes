/*Finding factorial of a number through recursion*/
#include<stdio.h>
#include<conio.h>
int fact(int n);
int fact(int n){
    if (n==1){
        return 1;
    }
    int Xn=fact(n-1)*n;
    return Xn;
    
}
int main(){
    int a;
    printf("Enter a number whose factorial you want:");
    scanf("%d",&a);
    printf("Factorial of %d is = %d",a,fact(a));
    return 0;
}