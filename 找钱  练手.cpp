#include<stdio.h>
#include<iostream>
int main()
{
	const int amount=100 ;   //�ǵüӷֺ� 
	
	int price =0;
	
	printf("�������Ԫ��: ");
	
	scanf("%d",&price);  //scanf�����  ��&�� ����Ϊ��������ݱ����&�ڱ�������ǰ�� 
	
	int change=amount-price;
	
	printf("����%dԪ��\n",change);
	
	system("pause");
	
	return 0;
	
}
