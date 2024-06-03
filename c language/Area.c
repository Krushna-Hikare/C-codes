#include<stdio.h>
#include<conio.h>
#include<math.h>
void aoc(float r);
void aos(float s);
void aor(float l, float b);
void aoc(float r){
    printf("The area of the circle is %f.\n",3.14*r*r);
}
void aos(float s){
    printf("The area of the square %f.\n",pow(s,2));
}
void aor(float l, float b){
    printf("The area of the rectangle %f.\n",l*b);
}
int main(){
    printf("What do you want to do.\n");
    printf("1)Area of circle.\n2)Area of the square\n3)Area of the rectangle.\n");
    int a;
    scanf("%d",&a);
    if (a==1){
        float b;
        printf("The radius of the circle is:");
        scanf("%f",&b);
        aoc(b);
    }else if(a==2){
        float b;
        printf("The side of the square is:");
        scanf("%f",&b);
        aos(b);
    }else if(a==3){
        float b,c;
        printf("The sides of of the rectangle is:");
        scanf("%f %f",&b, &c);
        aor(b,c);
    }
    _getch();
    return 0;


}
