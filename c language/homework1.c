#include<stdio.h>
#include<math.h>
//average of three numbers
int main() {
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d",(a+b+c)/3);
    return 0;
}