#include<stdio.h>
#include<conio.h>

int main(){
    int Arr[2][10];
    for(int i=0;i<10;i++){
        Arr[0][i]=2*(i+1);
        Arr[1][i]=3*(i+1);
        printf("%d\t",Arr[0][i]);
        printf("%d\t",Arr[1][i]);
    }
    return 0;
}