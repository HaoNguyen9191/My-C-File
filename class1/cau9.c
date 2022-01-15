#include <stdio.h>
#include <stdio.h>

int main()
{

	int A,B,C;
	int max;

	printf("Enter 3 number :");
	printf("\nFirst num");
	scanf("%d",&A);
	printf("\nSecond num");
	scanf("%d",&B);
	printf("\nThird num");
	scanf("%d",&C);

	if (A>=B) 
	{
		max=A;
	}
	else 
	{
		max=B;
	}
	if (C>=max) 
	{
		max=C;
	}
	printf("max is %d",max);

	return 0;

}