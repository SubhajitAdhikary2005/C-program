#include<stdio.h>
int ColumnWiseSorted(int r,int c, int mat[100][100])
{
   int i,j,k,temp;
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           for(k=i+1;k<r;k++)
           {
               if(mat[i][j]>mat[k][j])
               {
                   temp=mat[i][j];
                   mat[i][j]=mat[k][j];
                   mat[k][j]=temp;
               }
               
           }
       }
   }
   printf("Matrix after Column Wise Sorted:\n");
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
    ColumnWiseSorted(r,c,mat);
    return 0;
}