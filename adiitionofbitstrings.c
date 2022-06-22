#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter length of string:");
    scanf("%d", &n);
    int i,d;
    int a[n], b[n], s[n+1], c=0;
    
    printf("Enter data for a: ");
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter data for b: ");
    for(i=1; i<=n; i++){
        scanf("%d",&b[i]);
    }
    
    for(i=n; i>=1; i--){
        d=floor((a[i]+b[i]+c)/2);
        s[i]=a[i]+b[i]+c-2*d;
        c=d;
        
//        printf("d=%d s[%d]=%d c=%d\n",d,i,s[i],c);
    }
    s[0]=c;
    printf("The binary expansion of the sum is: ");
    for(i=0; i<n+1; i++){
        printf("%d",s[i]);
    }
    return 0;
}