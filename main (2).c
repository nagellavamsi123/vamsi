/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char pwd[10];
    char ch;
    int i=0;
    printf("enter the password");
    while((ch=getch())!=13)
    {
        pwd[i]=ch;
        printf("*");
        i=i+1;
    }
    printf("the entered password is%s",pwd);
}

    