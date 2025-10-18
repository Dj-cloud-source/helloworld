#include<stdio.h>
#include<iostream>
int main()
{
	
	int x;
	int n=0;
	
	
	scanf("%d",&x);
	
	n++;
	x/=10;//这里防止出现0，是零位数 。做特殊的判断 
	
	
	while  (x>0){
		n++;
		x/=10;
		
		printf("x=%d,n=%d\n",x,n);/*调试手段：在适当地方插入printf，把变量输出给我们看 。
		遇到复杂的程序经常用printf。
		当然提交作业时记得斜杠划掉。 
		*/ 
		
		
		
		 
		//while循环，只要条件满足，就不断括号里面的事情。 
	}
	 
	printf("您输入的数位是%d\n",n);
	/*
	测试程序通常使用边界数据，如有效范围两段的数据，特殊的倍数
	 个位数； 
	   10；
	    0；
	  负数；
	  */ 
	 
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
