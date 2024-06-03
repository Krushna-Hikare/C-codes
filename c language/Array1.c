#include<stdio.h>
#include<conio.h>

int gst(int x);

int main(){
    int GST[3];
    printf("Enter the cost of item 1:");
    scanf("%d",&GST[0]);
    printf("Enter the cost of item 2:");
    scanf("%d",&GST[1]);
    printf("Enter the cost of item 3:");
    scanf("%d",&GST[2]);
    int gst=0;
    for(int i=0;i<=2;i++){
        gst+=GST[i];
    }
    gst=gst+0.18*gst;
    printf("The cost of the items with gst is: %d",gst);
    return 0;
}