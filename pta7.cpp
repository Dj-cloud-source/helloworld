#include<stdio.h>
//计算分段函数[1]
int main(){
	
	//计算分段函数
	double x;
	double y;
	
	scanf("%lf",&x);
	/*
	switch关键字错误：C 语言中关键字是小写的switch，不是Switch（大小写敏感）。
	switch用法错误：switch的条件必须是整数表达式，且case后必须跟常量值，不能用x != 0这种条件判断（这是if-else的用法）。
	输出格式符错误：x和y是double类型，应该用%f输出，且题目要求保留一位小数（%.1f），不能用%d（%d用于整型）。
	语法缺失：switch需要用{}包裹分支，且缺少default或正确的分支结构。
	
	switch(x)
	
	case x != 0
		y = 1/x; 
		break;
		
	case x ==0
		y = 0;
		break;
		
	printf("f(%d) = %d",x,y);	
	
	*/	
	
	if (x != 0){
		y = 1/x ;
		
	}	else {
		y = 0;
	}
		
	
	
	printf("f(%.1f) = %.1f",x,y);
	
	
	
	
	return 0;
	
}
