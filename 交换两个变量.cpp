#include<stdio.h>
int main()
{
	
	int a;
	int b;
	int t;
	
	printf("a=");
	
	scanf("%d",&a);
	
	
	printf("b="); 
	
	scanf("%d",&b);
	//交换变量 
	t=a;
	a=b;
	b=t;
	
	printf("交换变量得"); 
	
	printf("a=%d,b=%d\n",a,b);
	
	
	
	
	
	
	
	
	return 0;
}
