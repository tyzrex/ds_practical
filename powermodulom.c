#include <stdio.h>
#include<stdlib.h>

int mpower(int b,int n,int m){
    if (n==0) return 1;
    else if(n%2==0) return (mpower(b,n/2,m)*mpower(b,n/2,m))%m;
    else return(((mpower(b,(n-1)/2,m)*mpower(b,(n-1)/2,m))%m)*b%m)%m;
}

void main(){
    int b,n,m,mpow;
    char c;
    do{
        printf("\n To calculate b^n mod m: ");
        printf("\n Enter integers b,n and m: ");
        scanf("%d%d%d",&b,&n,&m);
        mpow=mpower(b,n,m);
        printf("\n %d^%d mod %d = %d",b,n,m,mpow);
        printf("\n Do you want to continue?(1/0):");
        scanf(" %c",&c);
    }
    while (c=='y');
}