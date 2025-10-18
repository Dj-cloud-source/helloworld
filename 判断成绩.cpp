#include<stdio.h>
#include<iostream>
int main()
{
	const int pass=60;
	int score;
	
	printf("请输入成绩：");
	scanf("%d",&score);
	
	printf("您的成绩是：%d。\n",score);
	
	
	if   (score>pass){
		
		printf("恭喜您，成绩合格。\n");
		
	}
	else {
		printf("很遗憾，成绩不合格。\n");
		 
	}
	printf("再见。\n");
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
