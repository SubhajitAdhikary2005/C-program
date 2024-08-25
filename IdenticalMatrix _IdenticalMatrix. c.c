#include <stdio.h>
int IdenticalMatrix(int r1, int c1, int r2, int c2, int mat1[100][100], int mat2[100][100])
{
    int i, j, k;
    if (!(r1 == r2 && c1 == c2))
    {
        return 0;
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (mat1[i][j] != mat2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int i, j, r1, c1, r2, c2, mat1[100][100], mat2[100][100];
    printf("For First Matrix:");

    printf("Enter number of rows: ");
    scanf("%d", &r1);
    printf("Enter number of columns: ");
    scanf("%d", &c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter (%d,%d) element:", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("For Second Matrix:");
    printf("Enter number of rows: ");
    scanf("%d", &r2);
    printf("Enter number of columns: ");
    scanf("%d", &c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter (%d,%d) element:", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    if (IdenticalMatrix(r1, c1, r2, c2, mat1, mat2))
    {
        printf("Matrix are identical.\n");
    }
    else
    {
        printf("Matrix are not identical.\n");
    }
    return 0;
}
