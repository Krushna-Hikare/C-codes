//Swapping with the help of Pointers
#include<stdio.h>
#include<conio.h>

int swap(int* a, int* b);

int main(){
    int x=5,y=10;
    swap(&x,&y);
    printf("Values of x= %d and y=%d after swapping.",x,y);
    _getch()
    return 0;
}

int swap(int* a, int* b){
    int x=*b;
    *b=*a;
    *a=x;
    return *a,*b;
}