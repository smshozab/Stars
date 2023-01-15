#include<stdio.h>
main()
{
	int x,y,rows,space;
	printf("Input the number of rows \n");
	scanf("%d", &rows);
	
	for  (x=1;x<=rows;x++)
	{
		for (space=x;space<rows;space++)
		{
			printf(" ");
		}
		for (y=1;y<=(2*x-1);y++)
		{
			printf("*");
		}
		printf("\n");
	}
}