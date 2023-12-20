#include <stdio.h>
void main(){
	int a,b;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("Enter 2nd number: ");
	scanf("%d",&b);
	printf("Sum=  %d",a+b);
	printf("\nSubtraction= %d",a-b);
	printf("\nMultiplication= %d",a*b);
	printf("\nDivide= %.2g",(float)a/b);
	printf("\nRemainder= %d",a%b);
}
