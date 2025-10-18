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
	if(bill>=price)  {
		printf("应该找您：%d元\n",bill-price);
	}
	
	//钱不够
	if(bill<price)  {
		printf("余额不足\n"); 
	} 
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
