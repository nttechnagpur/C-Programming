#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	clrscr();
	printf("Enter Any Two Number\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("Subtraction is %d\n",c);
	getch();
	return 0;
}