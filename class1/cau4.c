#include <stdio.h>

int main()
{

	int days;
	int year;
	int week;
	int day;

	printf("Enter Days to convert: ");scanf("%d",&days);
	printf("\nConverts into :\n");
	printf("%d year(s)\n",days/365);
	printf("%d week(s)\n",days%365/7);
	printf("%d day(s)",days%365%7 );
	return 0;

}