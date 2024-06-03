#include<stdio.h>
int main() {
    int a;
    printf("Enter a number to check if it's even or odd:");
    scanf("%d", &a);
    printf("If answer is 0 then it's odd, else it's even:");
    printf("%d",a%2==0);
    return 0;
}