#include<stdio.h>

long factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}

void main(){
    int n;
    long fact;
    char q;
    do{
        printf("\n Enter a nonnegative integer:");
        scanf("%d",&n);
        fact=factorial(n);
        printf("\n The factorial of %d is %ld",n,fact);
        printf("\n Do you want to continue?(y/n):");
        scanf(" %c",&q);
    }while (q=='y');
}