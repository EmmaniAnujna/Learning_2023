/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
 
char* toBinary(int n, int len)
{
    char* binary = (char*)malloc(sizeof(char) * len);
    int k = 0;
    for (unsigned i = (1 << len - 1); i > 0; i = i / 2) {
        binary[k++] = (n & i) ? '1' : '0';
    }
    binary[k] = '\0';
    return binary;
}
 
int main(void)
{
    int n;
    int len = 32;
    scanf("%d",&n);
 
    char* binary = toBinary(n, len);
    printf("The binary representation of %d is %s", n, binary);
    free(binary);
 
    return 0;
}