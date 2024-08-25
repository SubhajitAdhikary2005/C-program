#include<stdio.h>
void SparseMatrix(int r,int c, int mat[100][100])
{
   int i,j,k,count=0;
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(mat[i][j]==0)
           { 
               count=count+1;
           }
       }
   }       
   if(count>(r*c)/2)
   {
        printf("This is a Sparse Matrix");
   }
   else
   {  
         printf("This is not a Sparse Matrix ");
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
