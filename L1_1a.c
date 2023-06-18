/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is biggest\n",a);
    }
    else
    {
        printf("%d is biggest\n",b);
    }
    return 0;
}
