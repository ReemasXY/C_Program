#include <stdio.h>
void main (){
	float a,c;
	int r;
	printf("Enter radius: ");
	scanf("%d",&r);
	a= 3.14*r*r;
	c= 2*3.14*r;
	printf("\n The area of circle is %g",a);
	printf("\n The circumference of circle is %g",c);
	
}
