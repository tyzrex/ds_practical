#include<stdio.h>
#define rmax 10
#define cmax 10

void main(){
    int A[rmax][cmax],B[rmax][cmax];
    int r,c,i,j;
    printf("\n Enter the numbers of rows and columns of the matrices: ");
    scanf("%d%d",&r,&c );
    printf("\n Enter the elements of the first matrix A,one row at a time\n");
    for (i = 0; i <= r-1; i++){
        for(j = 0; j <= c-1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n Enter the elements of the second matrix B, one row at a time \n");
    for (i = 0; i <= r-1; i++){
        for(j = 0; j <= c-1;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("\n The meet of the matrices A and B is:\n");
    for (i = 0; i <= r-1; i++){
        for(j = 0; j <= c-1;j++){
            printf("%d ",A[i][j]&&B[i][j]);
        }
        printf("\n");
    }
}