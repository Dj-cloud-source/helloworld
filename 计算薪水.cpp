#include<stdio.h>
#include<iostream>
int main()
{
	
	const double rate=8.25;
	const int    standard=40;
	double       pay=0.0;
	int          hours;
	
	
	printf("�����빤����Сʱ��:");
	scanf("%d",&hours);
	
	printf("\n");
	
	if  (hours>standard){
		pay=standard*rate+(hours-standard)*(rate*1.5);
	}
	else{
		pay=hours*rate;
	}
	
	
	printf("Ӧ�����ʣ�%f\n",pay);
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
