#include<stdio.h>
#include<iostream>
int main()
{
	
	const double rate=8.25;
	const int    standard=40;
	double       pay=0.0;
	int          hours;
	
	
	printf("请输入工作的小时数:");
	scanf("%d",&hours);
	
	printf("\n");
	
	if  (hours>standard){
		pay=standard*rate+(hours-standard)*(rate*1.5);
	}
	else{
		pay=hours*rate;
	}
	
	
	printf("应付工资：%f\n",pay);
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
