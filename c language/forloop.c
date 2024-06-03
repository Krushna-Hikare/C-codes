#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for (a;a>=0;a=a-1){
        printf("%d \n",a);
    }
    _getch();
    return 0;
}