#include<stdio.h>
#include<iostream>
int main()
{
	int n;
	printf("������һ�������ҿ��Ը�����׳ˣ�");
	scanf("%d",&n);
	
	
	int fact=1;
	
	int i=n;
	
	//for=���ڡ�  for����ʼ������������ÿ�ֶ����� 
	//������һ��ʼ��i=1����i<=nʱ���ظ���ѭ���塣ÿһ��ѭ�������ʹ��i++  �� 
	
/*	for  (i=1 ;i <= n;i++){
		fact *= i;
		
		
		ѭ�����Ʊ���i�ĳ�ʼֵ��ѭ�����������ձ�������Ӱ�� 
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
	
	
	
	/*�й̶���������for 
	������һ���� do  while
	������ while*/ 
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
	
}
