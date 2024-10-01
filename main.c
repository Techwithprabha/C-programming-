/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int L,B,R,cir,rec,sq;
    printf("enter the no:");
    scanf("%d%d%d",&L,&B,&R);
    cir=3.14*R*R;
    printf("area of circle =%d\n",cir);
    rec=L*B;
    printf("area of rectangle=%d\n",rec);
    sq=L*L;
    printf("area of square =%d\n",sq);
    return 0;
}