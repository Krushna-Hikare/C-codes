//using pointers to calculate add, multi, sub in a single function;
#include<stdio.h>
#include<conio.h>

int x(int a, int b, int *Add,int *Multi,int *Sub);
int main(){
    int a,b;
    int Add,Multi,Sub;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a,&b);
    x(a,b,&Add,&Multi,&Sub);
    printf("The value of Add=%d \n Multi=%d\n Sub=%d\n",Add,Multi,Sub);
    return 0;
}

int x(int a, int b, int *Add,int *Multi,int *Sub){
    *Add=a+b;
    *Multi=a*b;
    *Sub=a-b;
    return *Add,*Multi,*Sub; 
}