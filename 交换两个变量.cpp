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
	//�������� 
	t=a;
	a=b;
	b=t;
	
	printf("����������"); 
	
	printf("a=%d,b=%d\n",a,b);
	
	
	
	
	
	
	
	
	return 0;
}
