#include<stdio.h>
int SparseMatrix(int r,int c, int mat[100][100])
{
   int i,k,trace=0;
   if(r==c)
   {
      for(i=0;i<r;i++)
      {
             trace=trace+mat[i][i];//i==j so we can replace j by i
      }    
   printf("Trace of matrix is: %d",trace);
   }
   else
   {
      printf("Rows and columns no. are not equal,it is not a Square Matrix. So, Trace of matrix is not possible");   
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
    SparseMatrix(r,c,mat);
    return 0;
}
