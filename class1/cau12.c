#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter 3 number which is Triangle's angles: ");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b+c==180  && a>0 && a<180 && b>0 && b<180 && c>0 && c<180)
	{
        printf("\nThis is a Triangle");
	}
	else 
	{
	printf("\nthis isn't a Triangle");
	}
}