//Sum of N natural number with the help of recursion
#include<stdio.h>
#include<conio.h>
int sum(int n);
int main(){
    printf("This program will find the sum of n natural numbers:\n");
    printf("Enter a number:\n");
    int a;
    scanf("%d",&a);
    printf("The sum of the n natural number is %d\n",sum(a));
    return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNM1=sum(n-1);
    printf("%d",sumNM1);
    int sumN=sumNM1+n;
    return sumN;
}