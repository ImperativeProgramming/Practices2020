#include<stdio.h>

int main()
{
	long i, current, next;	
	
	current = 1;
	next = 1;
	
	for(i=0; i<20; i++)
	{
	   printf("%d \n",current);
	   int temp = next;
	   next = current + next;
	   current = temp;
	}
}