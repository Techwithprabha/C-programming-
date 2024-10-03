/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    int a,b,r,circle , rectangle , triangle,square;
    printf("enter the value:");
    scanf("%d%d%d ",&a,&b,&r);
    circle=2*3.14*r;
    printf("perimeter=%d\n ",circle );
    rectangle =2*(a+b );
    printf("perimeter =%d\n ",rectangle);
    triangle =3*a;
    printf("perimeter =%d\n ",triangle);
    square =4*a;
    printf("perimeter =%d\n ",square);
    return 0;
}