/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rollno,Mm,Pm,Cm;
    float total,percent;
    char name[100];
    printf("Enter rollno : ");
    scanf("%d",&rollno);
    printf("Enter student name : ");
    scanf("%s",name);
    printf("Enter marks : ");
    scanf("%d %d %d",&Mm,&Pm,&Cm);
    total=Mm+Pm+Cm;
    percent=(total/300.0)*100.0;
    printf("Rollno : %d\n",rollno);
    printf("Name : %s\n",name);
    printf("Marks obtained:\n\tMaths:%d\n\tPhysics:%d\n\tChemistry:%d\n",Mm,Pm,Cm);
    printf("Total marks obtained : %.1f/300.0\n",total);
    printf("Percentage : %.1f ",percent);
    return 0;
}
