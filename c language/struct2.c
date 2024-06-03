//making a complex number structure and accesing elements using arrow operator
#include<stdio.h>
#include<conio.h>

typedef struct complexnumber{
    int real;
    int imaginary;
} cn;

int main(){
    cn c1={3,4};
    cn *ptr=&c1;
    printf("%d %d",ptr->real,ptr->imaginary);
}