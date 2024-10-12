/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int maths,phy,chem,Hin,Eng,percent;
    printf("enter the value :");
    scanf ("%d%d%d%d%d",&maths,&phy,&chem,&Hin,&Eng);
    percent=(maths+phy+chem+Hin+Eng )*100/500;
    printf("percent is =%d\n",percent );
    return 0;
}