#include<stdio.h>

int gcd(int a, int b){
    while(b !=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("The gcd is: %d", gcd(x,y));
    return 0;
}