#include<stdio.h>
#include<iostream>
int main()
{
	//��ʼ��
	int price=0;
	int bill=0 ;
	
	
	//�������Ʊ��
	printf("������Ӧ����");
	scanf("%d",&price);
	
	printf("������ʵ����");
	scanf("%d",&bill);
	 
	//��������
	if  (bill>=price)  {
		printf("Ӧ��������%dԪ\n",bill-price);
	}
	
	//Ǯ����// 

	else   {
		printf("��������\n");  //���else������� ����һ��С���ţ��� 
	}
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
