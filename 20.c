#include<stdio.h>
main()

{
	int r,y=4,z=4,c;
	
	
	for(r=4;r>=1;r--)
	{
		for(c=1;c<=7;c++)
		{
			
		if(y==c||z==c)
	
		{
		
			printf("*");
		}
		
		else
		{
			printf(" ");
		}
	}
	
		printf("\n");
		y--;
		z++;
	}
}








