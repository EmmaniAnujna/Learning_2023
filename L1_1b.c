/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    max = a>b ? a : b;
    printf("%d is biggest",max);
    return 0;
}
