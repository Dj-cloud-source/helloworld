#include<stdio.h>
#include<iostream>
int main()
{
	int a,b;
	
	printf("请输入两个数字：");
	scanf("%d %d",&a,&b);
	
	int max=0;
	
	 if  (a>b)  {
	 	
		 max=a;
	 	
	 }
	    else{
	    	max=b;
		}
	
	
	
	printf("大的那个是%d\n",max);
	
	
	
	
	
	
	system("pause");
	return 0;
}
