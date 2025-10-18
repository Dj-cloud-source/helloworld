#include<stdio.h>
#include<iostream>
int main()
{
	int x;
	printf("请输入一个整数：");
	scanf("%d",&x);
//	x=700;
	
	int digit;
	int ret=0;
	
	
	while  (x>0){
		
		digit=x%10;
		//printf("%d",digit);
		
		ret=ret*10+digit;
		
		
	//	printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
		
		x /= 10;
		 
	}
	printf("倒过来是%d\n",ret);
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
