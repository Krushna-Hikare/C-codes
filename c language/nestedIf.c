#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a>0){printf("The number %d is a natural number\n",a); if (a%2==0){printf("THe number is even\n");}else{printf("The number is odd\n");}
    } else {printf("The number %d is not a natural number",a);}
    return 0;

}