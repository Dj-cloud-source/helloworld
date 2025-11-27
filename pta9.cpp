#include<stdio.h>
//输出华氏-摄氏温度转换表
int main(){
	//lower和upper 是区间 
	int lower ;
	int upper ;
	 
	scanf("%d %d",&lower,&upper);
	
	/*
	if (lower > upper || upper > 100){
		合法性判断不完整：
	缺少对lower < 0的检查
	（题目要求输入 “正整数”，若lower为负数则不合法）。
	*/ 
		if (lower > upper || upper > 100 || lower < 0) {
		printf("Invalid.\n");
		
	}
	
	if (lower <= upper && upper <= 100){
		
	//		lower = 5 * (upper -32)/9 ;
	//		printf("Celsius = %d",C);
		printf("fahr celsius\n");
		//for循环里面用 ; 分隔 
		for(int fahr = lower ; fahr <= upper ; fahr += 2){
			
			double celsius ;
			
			celsius =  5 * (fahr -32)/9 ;
	/*
	浮点运算精度：
	5 * (fahr -32)/9使用整数5，可能导致除法结果被截断
	（例如计算时先进行整数运算再转为浮点），应改为5.0确保浮点运算精度。		
	*/		
	/* 
			printf("%d   %.1f\n",fahr,celsius);
	
	格式对齐问题：
	摄氏温度要求 “占据 6 个字符宽度，靠右对齐”，
	当前的%d %.1f中，空格数量固定，无法保证不同数值的对齐
	（例如当华氏温度为 3 位数时，空格会被挤压）。需用%6.1f控制格式，确保总宽度为 6 且右对齐。
	*/
	// %6.1f保证摄氏温度占6个字符宽度，右对齐
        printf("%d%6.1f\n", fahr, celsius);
	
		}
	/*		printf("%d    %.1f",fahr,celsius); 
	变量作用域错误：fahr和celsius定义在for循环内部，属于局部变量，
	循环外部无法访问，导致最后一行printf会报错（未定义的变量）。
	*/
	}
	
	
	
	
	
	
	
	
	return 0;
} 
