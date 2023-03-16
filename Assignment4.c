//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include<stdio.h>
int main()
{
int matrix[3][3]={{1,2,3},{4,5,6},{70,80,9}};
int max=0,i,j;
printf("MATRIX is :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
  {
      printf("\t%d ",matrix[i][j]);
	       if(max<matrix[i][j]){max=matrix[i][j];}
  }
  printf("\n");
}
  printf("maximum element in the matrix is %d",max);
  return 0;                                            // name-Dhruv , roll no. -2210997071
}
