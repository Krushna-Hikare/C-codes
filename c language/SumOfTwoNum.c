#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b;
    
    printf("Enter another number: ");
    scanf("%d",&b);
    int c=a+b;
    printf("The sum of these two numbers is: %d \n",c);
    printf("Press any key to close:\n");
    _getch();
    return 0;
}