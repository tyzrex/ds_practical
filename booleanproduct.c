//BOOLEAN PRODUCT OF TWO BOOLEAN MATRICES
#include<stdio.h>
#define rmax 10
#define cmax 10

int main(){
    int A[rmax][cmax], B[rmax][cmax],C[rmax][cmax];
    int r1,c1,r2,c2,i,j,k;

    printf("Enter the number of rows and columns of the the first matrices: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of rows and columns of the the second matrices: ");
    scanf("%d %d", &r2, &c2);

    if(c1!=r2){
        printf("\nThe dimension of the matrices do not match.");
    }

    else{
        printf("\nEnter the elements of the first matrix A, one row at a time: \n");
            for(i=0;i<=r1-1;i++){
                for(j=0;j<=c1-1;j++){
                    scanf("%d", &A[i][j]);
                }
            }

        printf("\nEnter the elements of the second matrix B, one row at a time: \n");
            for(i=0;i<=r2-1;i++){
                for(j=0;j<=c2-1;j++){
                    scanf("%d", &B[i][j]);
                }
            }

        printf("\nThe Boolean product of the matrices A and B is:\n");
            for(i=0;i<=r1-1;i++){
                for(j=0;j<=c2-1;j++){
                    C[i][j]=0;
                    for(k=0;k<=r2-1;k++){
                        C[i][j]=C[i][j] || (A[i][k] && B[k][j]);
                    }
                    printf("%d ",C[i][j]);
                }
            printf("\n");
            }
    }
    return 0;
}