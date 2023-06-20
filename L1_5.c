/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int rem, n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>=0 && n<=9)
    {
        printf("Invalid\n");
    }
    else
    {
        while(n > 0) 
        {
            rem = n % 10;
            if(rem < min) 
            {
                min = rem;
            }
            if(rem > max) 
            {
                max = rem;
            }
            n /= 10;
        }
        printf("%d and %d", min, max);
    }
    return 0;
}