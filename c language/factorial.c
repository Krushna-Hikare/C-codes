#include<stdio.h>
#include<conio.h>
int main(){
    int n,j=1;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The Factorial of the given number is:");
    for(int i=1;i<=n;i++) {
        j=j*i;
    }
    printf("%d",j);
    _getch();
    return 0;

}