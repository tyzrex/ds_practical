#include<stdio.h>
#define max 20

int search(int a[],int i,int j,int x){
    if(a[i]==x) return i;
    else if(i==j) return 0;
    else return search (a,i+1,j,x);
}

void main(){
    int a[max],n,x,i=1,j,k,location;
    char q;
    printf("\n Enter the number of elements in the list:");
    scanf("%d",&n);
    j = n;
    printf("\n Enter the elenents of the list:");
    for(k=1;k<=n;k++)
    scanf("%d",&a[k]);
    do {
        printf("\n Enter the element to search in the list: ");
        scanf("%d",&x);
        location = search(a,i,j,x);
        printf("\n The location of the element is %d is at %d",x,location);
        printf("\n Do you want to search another element?(y/n):");
        scanf(" %c",&q);        
    }while(q=='y');

}