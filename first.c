#include<stdio.h>

int main()
{
	int bin=0, dec=0, buff=0, n=1;

	printf("Enter the binary number:");
	scanf("%d",&bin); 
	while(bin!=0) 
	{
		buff=bin%10;  
		dec=dec+buff*n;
		bin=bin/10; 
		n=n*2; 
	}
	printf("Decimal: %d",dec);
	return 0;
}

