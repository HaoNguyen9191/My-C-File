#include <stdio.h>

int main()
{
	int R;
	printf("Enter a number to convert:\n");scanf("%d",&R);
	if (R>=0) {
		printf("Absolute is : %d",R);
	}

	else {
		printf("Absolute is : %d", 0-R);
	}

	return 0;
}