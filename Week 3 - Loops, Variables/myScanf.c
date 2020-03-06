#include <stdio.h>

int biggest(int a, int b)
{
	if (a>b)
	  return a;
    
	return b;
}

int main()
{
	int myInt = 5;
	scanf("%d", &myInt);
	printf("myInt = %d", myInt % 2);
	
	
	
	return 0;
}