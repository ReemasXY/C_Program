#include <stdio.h>
void main()
{
	int gram,kg,g;
	printf("Enter weight in gram: ");
	scanf("%d",&gram);
	kg= gram/1000;
	g = gram % 1000;
	printf("\nKilogram= %d",kg);
	printf("\nGram= %g",g);
}
