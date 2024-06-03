//using marks of sanskrit, maths, science find percentage
#include<stdio.h>
#include<conio.h>
void per(float a,float b,float c);
void per(float a,float b,float c){
    float P=(a+b+c)/3;
    printf("The percentage of the given student is= %f",P);
}
int main(){
    printf("Enter the marks of the student in Sanskrit, Maths, Science:");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    per(a,b,c);
    _getch();
    return 0;
}