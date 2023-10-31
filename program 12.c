#include<stdio.h>
void main()
{
	int p,r,t,product,simpleinterest;
	printf("Enter the integers:\n");
	scanf("%d%d%d",&p,&r,&t);
	product=p*r*t;
	simpleinterest= product/100;
	printf("The simpleinterest is:%d",simpleinterest);
}
