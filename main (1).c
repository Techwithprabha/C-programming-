/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	int a,b,add,sub,mul,div;

	printf("enter the no:");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("sum=%d\n",add);
	sub=a-b;
	printf("subtract=%d\n",sub);
	mul=a*b;
	printf("multiple=%d\n",mul);
	div=a/b;
	printf("divide=%d\n",div);
	return 0;
}