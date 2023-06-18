/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<=100 && a>=90)
    {
        printf("Grade A");
    }
    else if(a<=89 && a>=75)
    {
        printf("Grade B");
    }
    else if(a<=74 && a>=60)
    {
        printf("Grade C");
    }
    else if(a<=59 && a>=50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
