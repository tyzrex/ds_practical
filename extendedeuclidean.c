#include<stdio.h>

void gcd(int a, int b){
    int s1=0,s2=1,t1=1,t2=0;
    int d,q,r,s,t;

    while(b != 0){
        q= a / b;
        r= a % b;
        s= s2-q*(s1);
        t= t2-q*(t1);
        a = b;
        b = r;
        s2 = s1;
        s1 = s;
        t2 = t1;
        t1 = t;
    }
    d = a;
    s = s2;
    t = t2;

    printf("The gcd is %d\n", d);
    printf("s= %d, t= %d", s2,t2);

}

int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    gcd(x,y);
    return 0;
}