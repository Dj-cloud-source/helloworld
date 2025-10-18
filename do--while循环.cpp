#include<stdio.h>
#include<iostream>
int main()
{
	
	int x;
	int n=0;
	scanf("%d",&x);
	
	
	do{
		
		x/=10;
		n++;
	    printf("x=%d,n=%d\n",x,n);
		
			
	}  while(x>0);
	/*do--while 循环  无论如何，这个循环都会做一遍，再来判断条件 
	   while先判断条件再做。可能一次也不做*/ 
	
	
	printf("位数为：%d\n",n); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
