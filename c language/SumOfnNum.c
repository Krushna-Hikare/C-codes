#include<stdio.h>
#include<conio.h>
int main(){
    int n,m=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        m+=i;
    }
    printf("The sum of n natural numbers is %d\n",m);
    _getch();
    return 0;

}