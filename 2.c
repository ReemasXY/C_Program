#include <stdio.h>
void main(){
	int l,b,h,v;
	printf("Enter length: ");
	scanf("%d",&l);
	printf("\nEnter breadth: ");
	scanf("%d",&b);
	printf("\nEnter height: ");
	scanf("%d",&h);
	v= l*b*h;
	printf("The volume of a box is %d",v);
	
}
