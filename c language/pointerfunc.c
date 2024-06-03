//Pointers using function
#include<stdio.h>
#include<conio.h>

int sqr(int* a);
 
int main(){
    int x=100;
    printf("Value of x before passing through the function= %d \n",x);
    printf("Value of the x in the function =%d \n",sqr(&x));
    printf("Value of x after passing through function = %d \n",x);
    printf("Enter any key to close.");
    _getch();
    return 0;

}

int sqr(int* a){
    *a= *a * *a;
    return *a;
}