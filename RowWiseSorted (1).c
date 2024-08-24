#include<stdio.h>
int RowWiseSorted(int r,int c, int mat[100][100])
{
   int i,j,k,temp;
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           for(k=j+1;k<c;k++)
           {
               if(mat[i][j]>mat[i][k])
               {
                   temp=mat[i][j];
                   mat[i][j]=mat[i][k];
                   mat[i][k]=temp;
               }
               
           }
       }
   }
   printf("Matrix after Row Sorted:\n");
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
    RowWiseSorted(r,c,mat);
    return 0;
}