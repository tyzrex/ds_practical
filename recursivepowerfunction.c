#include<stdio.h>

double power(float a, int n){
    if (n==0) return 1;
    else return a*power(a,n-1);
}

void main(){
    float a;
    int n;
    double pow;
    char q;
    do{
        printf("\n Enter a nonzero real number: ");
        scanf("%f", &a);
        printf("\n Enter a nonnegative integer: ");
        scanf("%d", &n);
        pow = power(a,n);
        printf("\n The value of %f raised to the power %d is %f",a,n,pow);
        printf("\n Do you want to continue?(y/n):");
        scanf(" %c",&q); 
    }
    while(q=='y');
}