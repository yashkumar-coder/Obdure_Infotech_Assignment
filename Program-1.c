// WAP to find the area & perimeter of a rectangle


#include<stdio.h>
int main(){
    int length, width, Area, P;
    printf("Enter the length of rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of rectangle: ");
    scanf("%d", &width);
    Area = length * width;
    printf("The area of rectangle: %d\n", Area);
    P = 2*(length+width);
    printf("Enter the perimeter of rectangle: %d", P);
    return 0;
}
