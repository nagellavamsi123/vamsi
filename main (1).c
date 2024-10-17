/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char a[100];
    printf("enter sentences ");
    gets(a);
    int count=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==' '&& a[i+1]=' ')
        {
            count=count+1;
        }
    }
    printf("the number of words is%d",count+1);
}