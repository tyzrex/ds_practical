#include<stdio.h>
#include<stdlib.h>

int division(int a, int d){
    int q = 0;
    int r = abs(a);

    while(r>=d){
    r=r-d;
    q=q+1;
    }
if(a<0){
    if(r>0){
        r=d-r;
        q=-(q+1);
    }
    else if(r=0){
        q=-q;
    }
}
printf("Quotient=%d, Remainder=%d",q,r);
}


int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    division(x,y);
    return 0;
}