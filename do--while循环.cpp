#include<stdio.h>
#include<iostream>
int main()
{
	
	int x;
	int n=0;
	scanf("%d",&x);
	
	
	do{
		
		x/=10;
		n++;
	    printf("x=%d,n=%d\n",x,n);
		
			
	}  while(x>0);
	/*do--while ѭ��  ������Σ����ѭ��������һ�飬�����ж����� 
	   while���ж���������������һ��Ҳ����*/ 
	
	
	printf("λ��Ϊ��%d\n",n); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
