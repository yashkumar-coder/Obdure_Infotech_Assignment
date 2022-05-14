// WAP to swap two variables with and without using third variable.


#include<stdio.h>
int swap(int num1, int num2){
    printf("%d and %d", num1, num2);
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping num1: %d \n num2 : %d", num1, num2);
}
int main(){
    int num1, num2;
    printf("enter the value of num1: ");
    scanf("%d", &num1);
    printf("enter the value of num2: ");
    scanf("%d", &num2);
    swap(&num1, &num2);
    return 0;
}


