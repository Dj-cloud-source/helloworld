#include<stdio.h>
#include<iostream>
int main()
{
	int price=0;
	
	printf("�������Ԫ��: ");
	
	scanf("%d",&price);  //scanf�����  ��&�� ����Ϊ��������ݱ����&�ڱ�������ǰ�� 
	
	int change=100-price;
	
	printf("����%dԪ��\n",change);
	
	system("pause");
	
	return 0;
	
}
