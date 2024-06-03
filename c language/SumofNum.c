#include<stdio.h>
#include<conio.h>
int main(){
    int n,m=0,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        m+=i;
        i++;
    }
    printf("The sum of n numbers is %d",m);
    return 0;
}