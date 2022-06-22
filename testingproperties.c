#include <stdio.h>
#define max 10
void main()
{
    int i, j, n, mat[max][max];
    printf("Enter the number of elements in set A: ");
    scanf("%d", &n);
    printf("\n Enter the matrix representation of relation");
    printf("\n one row at a time: \n");
    for (i = 0; i <= n - 1; i++)
        for (j = 0; j <= n - 1; j++)
            scanf("%d", &mat[i][j]);
    int key = 1;
    for (i = 0; i <= n - 1; i++)
        key = key && mat[i][i];
    if (key == 1)
        printf("\n The given relation is reflexive.");
    else
        printf("\n The given relation is not reflexive.");
    key = 1;
    for (i = 0; i <= n - 1; i++)
        for (j = 0; j <= n - 1; j++)
            if (mat[i][j] != mat[j][i])
                key = 0;
    if (key == 1)
        printf("\n The given relation is symmetric.");
    else
        printf("\n The given relation is not symmetric.");
    key = 1;
    for (i = 0; i <= n - 1; i++)
        for (j = 0; j != i && j <= n - 1; j++)
            if ((mat[i][j] && mat[j][i]) == 1)
                key = 0;
    if (key = 1)
        printf("\n The given relation is antisymmetric.");
    else
        printf("\n The given relation is not antisymmetric.");
}