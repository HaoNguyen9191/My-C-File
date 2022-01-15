#include <stdio.h>

int main()
{

	int year,kiemtra;
	printf("Enter a year:");
	scanf("%d",&year);

	if (year<0)
	{
        	printf("Please re-enter a year: ");
        	scanf("%d",&year);
	}	
	
	if ((year%4==0 && year%100!=0) || year%400==0)
	{
        	kiemtra=1;
	}
	else 
	{
        	kiemtra=0;
	}
	
	if (kiemtra==1)
	{
		printf("This is a leap year");
	}
	else 
	{
		printf("This is not a leap year");
	}
	return 0;

} 