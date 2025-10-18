#include<stdio.h>
#include<iostream>
int main()
{
	//初始化
	int price=0;
	int bill=0 ;
	
	
	//读入金额和票面
	printf("请输入应付金额：");
	scanf("%d",&price);
	
	printf("请输入实付金额：");
	scanf("%d",&bill);
	 
	//计算找零
	if  (bill>=price)  {
		printf("应该找您：%d元\n",bill-price);
	}
	
	//钱不够// 

	else   {
		printf("您的余额不足\n");  //这个else条件语句 共用一个小括号（） 
	}
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
