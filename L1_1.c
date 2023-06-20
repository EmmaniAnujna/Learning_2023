/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
  int i,j,k,n;
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n;j++)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=n;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
  return 0;
}