#include<stdio.h>
#include<iostream>
int main()
{
	int n;
	printf("请输入一个数，我可以给你求阶乘：");
	scanf("%d",&n);
	
	
	int fact=1;
	
	int i=n;
	
	//for=对于。  for（初始条件；条件；每轮动作） 
	//“对于一开始的i=1，当i<=n时，重复做循环体。每一轮循环做完后，使得i++  ” 
	
/*	for  (i=1 ;i <= n;i++){
		fact *= i;
		
		
		循环控制变量i的初始值对循环次数和最终变量都有影响 
	}
*/



/*
    for  (i=n;i>1;i--){
	    fact *= i;
}
*/



for(n=n;n>1;n--){
	fact *= n;
	
}

	printf("%d! = %d \n",i,fact);
	
	
	
	/*有固定次数的用for 
	必须做一次用 do  while
	其他用 while*/ 
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
	
}
