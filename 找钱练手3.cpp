#include<stdio.h>
#include<iostream>
int main()
{
    int amount=100 ;   //�ǵüӷֺ� 
	int price =0;
	
	printf("�������Ԫ��: ");
	
	scanf("%d",&price);  //scanf�����  ��&�� ����Ϊ��������ݱ����&�ڱ�������ǰ�� 

    printf("������Ʊ�棨Ԫ����");
    scanf("%d",&amount);
	
	int change=amount-price;
	
	printf("����%dԪ��\n",change);
	
	system("pause");
	
	return 0;
	
}
