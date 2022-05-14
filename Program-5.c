
#include<stdio.h>
int digits(int n){
    int rem; 
    int ans=0;
    int Inc=1;
    while(n>0){
        rem=n%10;
        rem++;
        rem=rem%10;
        ans=ans+rem*Inc;
        Inc=Inc*10;
        n=n/10;
    }
    printf("Elements: %d",ans);
}
int main(){
    int n=35897;
    digits(n);
    return 0;
}

/