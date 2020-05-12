 //QUESTION:
   // PROGRAM TO PRINT DIAMOND(ROMBUS) SHAPE AND AREA IS OCCUIPED WITH SEQUENCE NUMBERS
#include<stdio.h>
void program(int);
int main()
{
    int n;
    printf(" ENTER A NUMBER \n");
    scanf("%d",&n);
    program(n);



}
void program(int n)
{

   int i,j,k,check ;
   check=n/2;
   printf("%d",check);
   for(i=1;i<=check+1;i++)
   {
   for(j=1;j<=check;j++)
    {
        printf(" ");
    }
    for(k=1;k<=2*n-1;k++)
    {
        printf("*");
     }
          printf("\n");
   }
   for(i=check;i>=1;i--)
   {
   for(j=check;j>=1;j--)
    {
        printf(" ");
    }
    for(k=1;k<=2*n-1;k++)
    {
        printf("*");
     }
          printf("\n");
   }



}



