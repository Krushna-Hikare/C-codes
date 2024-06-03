//temp convert from farenheit to celcius
#include<stdio.h>
#include<conio.h>
float FtC(float x);
float FtC(float x){
    float F=(9.0/5.0)*x+32;
    return F;
}
int main(){
    printf("Enter value of celcius:");
    float c;
    scanf("%f",&c);
    printf("The value in farenheit of %f is = %f",c,FtC(c));
    _getch();
    return 0;
}