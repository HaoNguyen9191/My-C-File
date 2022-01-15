#include <stdio.h>

int main()
{

	int A,B;

	printf("Enter 2 number ");scanf("%d%d",&A, &B);
	if (A >= B) 
	{
		printf("max is %d",A);
	}
	else 
	{
		printf("max is %d",B);
	}

	return 0;

}