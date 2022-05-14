//  WAP to print all the Armstrong numbers between 1 and 500.

#include<stdio.h>
int Armstrong(int i){
    int x, r, sum;
    for(i=1; i<=500; i++){
        sum =0;
        x = i;
        while(x != 0){
            r = x%10;
            sum = sum + (r*r*r);
            x = x/10;
        }
        if(sum == i){
            printf("%d\n", i);
        }
    }
}
int main(){
    int i;
    printf("All the Armstrong numbers between 1 and 500");
    Armstrong(i);
    return 0;
}


