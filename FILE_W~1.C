#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct threeNum
{
	int n1,n2,n3;
};
int main()
{
	int n;
	struct threeNum num;
	FILE *fptr;
	clrscr();

	if ((fptr = fopen("C:\\Turboc3\\BIN\\TEXT1.TXT","w")))
	{
		printf("Error! Opening File.\n");
		exit(1);
	}
	for (n = 1; n < 5; ++n)
	{
		num.n1=n;
		num.n2=5*n;
		num.n3=5*n+1;
		fwrite(&num,sizeof(struct threeNum),1,fptr);
	}
	fclose(fptr);
	getch();
	return 0;
}