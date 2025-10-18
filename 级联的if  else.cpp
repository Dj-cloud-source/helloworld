#include<stdio.h>
#include<iostream> 
int main()
{
	int x;
	printf("请输入x的值:");
	scanf("%d",&x);
	
	int f=0;
	if (x<0)  {
		f=-1;
	}else  if(x==0){
		f=0;
	}else {
		f=2*x;
	}
	//级联的 if  else 
	printf("%d",f);
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
