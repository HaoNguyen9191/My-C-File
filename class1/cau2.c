#include <stdio.h>

int main()

{

	int A,B;


	printf("Enter 2 number\n");
	scanf("%d%d", &A, &B);

	//calculation

	printf("%d + %d = %d",A,B,A+B);printf("\n");

	printf("%d - %d = %d",A,B,A-B);printf("\n");

	printf("%d * %d = %d",A,B,A*B);printf("\n");

	printf("%d / %d = %d",A,B,A/B);printf("\n");

	printf("%d %% %d = %d",A,B,A%B);printf("\n");

	return 0;

}