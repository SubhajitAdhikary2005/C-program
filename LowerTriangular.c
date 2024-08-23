#include<stdio.h>
int LowerTriangular(int r,int c, int mat[100][100])
{
   int i,j;
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(i<j)
           {
               mat[i][j]=0;
           }
       }
   }
   printf("Lower Triangular Matrix is:\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         printf("%d ",mat[i][j]);
      }
      printf("\n");
   }

}
int main()
{
    int i,j,r,c,mat[100][100];
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          printf("Enter (%d,%d) element:",i,j);
          scanf("%d",&mat[i][j]);
       }
    }
    printf("Matrix is:\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          printf("%d ",mat[i][j]);
       }
       printf("\n");
    }
    LowerTriangular(r,c,mat);
    return 0;
}