//Armstrong number; ex: 153= 1^3+5^3+3^3
#include <stdio.h>
#include<conio.h>
#include <math.h>

int arm(int a);
int len(int x);

int len(int x){
    // To check the number of digits in a number
    if (x != 0){
        int a, b, c;
        for (a = 0; x != 0; a++) {
            x = x / 10;
        }
        return a;
    } else {
        return 0;
    }
}

int arm(int a){
    int b = len(a), c = a;
    float d = 0;
    for (int i = b; c != 0; c /= 10) {
        d += pow((c % 10), b);
        printf("%f+",pow((c%10),b));
    }
    printf("= %f.",d);
    return d;
}

int main(){
    printf("Enter a number:");
    int a;
    scanf("%d", &a);
    if (a==arm(a)){
        printf("It's an armstrong number.\n");
    }else{
        printf("It's not an armstrong number.\n");
    }
    printf("press any tab to exit.");
    return 0;
}