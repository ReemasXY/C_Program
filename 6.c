#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter 1st number: ");
	scanf("%d",&a);
	printf("\nEnter 2nd number: ");
	scanf("%d",&b);
	printf("\nEnter 3rd number: ");
	scanf("%d",&c);
	printf("\nThe average of three numbers= %g", (float)(a+b+c)/3);
}
