#include<stdio.h>
main()
{
	int x,y,rows;
	printf("Input the number of rows \n");
	scanf("%d", &rows);
	
	for  (x=1;x<=rows;x++)
	{
		for (y=1;y<=x;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}