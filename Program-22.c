// Swap the value of two variables using call by value & by reference.

#include<stdio.h>
// Call by value
int callByValue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d\t", a);
    printf("b = %d\n", b);
}

// Call by reference
int callByReference(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("A = %d and B = %d", *a, *b);
}

int main(){
    int a, b, temp;
    printf("Before swapping\n");
    printf("value of a: ");
    scanf("%d", &a);
    printf("value of b: ");
    scanf("%d", &b);
    printf("After swapping\n");
    callByValue(a,b);
    callByReference(&a, &b);
    return 0;
}
