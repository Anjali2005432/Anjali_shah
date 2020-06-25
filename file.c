#include <stdio.h>
#include <conio.h>
int main()
{
    int a1[10][10],b1[10][10],r[10][10];
    int rows,columns;
    int i,j;
    printf("enter the number of rows and columns \n");
    scanf("%d %d",&rows,&columns);
    read_array(a1,rows,columns);
    read_array(b1,rows,columns);
    add_array(a1,b1,r,rows,columns);
    print_array(r,rows,columns);
    return 0;

}
    void read_array(int m[10][10],int rows,int columns)  //reading the array elements
    {
       int i,j;
       printf("enter array elements \n");
       for(i=0;i<rows;i++)
       {
           for(j=0;j<columns;j++)
           {
               scanf("%d",&m[i][j]);
           }
       }
    }


    void  add_array(int a1[10][10], int b1[10][10],int r[10][10],int rows,int columns) //addition of matrices
     {
       int i,j;
       for(i=0;i<rows;i++)
       {
           for(j=0;j<columns;j++)
           {
               r[i][j]=a1[i][j]+b1[i][j];
           }
       }
    }

    void print_array(int r[10][10],int rows,int columns)//for printing the addition matrix
      {
       int i,j;
       printf("sum of matrices \n");
       for(i=0;i<rows;i++)
       {
           for(j=0;j<columns;j++)
           {
               printf("%d ",r[i][j]);
           }
           printf("\n");
       }
    }




