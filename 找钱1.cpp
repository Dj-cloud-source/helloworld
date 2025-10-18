#include<stdio.h>
#include<iostream>
int main()
{
	int price=0;
	
	printf("请输入金额（元）: ");
	
	scanf("%d",&price);  //scanf必须接  “&” ，因为想读入数据必须加&在变量名词前面 
	
	int change=100-price;
	
	printf("找您%d元。\n",change);
	
	system("pause");
	
	return 0;
	
}
