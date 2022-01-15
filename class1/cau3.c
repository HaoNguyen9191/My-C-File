#include <stdio.h>

int main()
{

	int length;
	int width;

	printf("Enter the Width and Length:\n");
	printf("Length = ");scanf("%d",&length);
	printf("\nWidth = ");scanf("%d",&width);
	printf("\nPerimiter = %d",length*2+width*2);
	printf("\nArea = %d",length*width);
	return 0;
}