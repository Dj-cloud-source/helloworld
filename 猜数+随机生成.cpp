#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	
	int number=rand()%100+1;
	int count=0;
	int a=0;
	
	printf("���Ѿ����һ��1��100֮������ˡ�\n");
	
	do{
		
		printf("����������");
		scanf("%d",&a);
		count++  ;
		
		if  (a>number){
		   printf("��µ������ˣ������¡�\n");
		    
		} else if (a<number){
			printf("��µ���С�ˣ������¡�\n");
			
		}
		
		
		
		
		
		
		
		
		
		
		
	} while  (a != number);
	
	printf("̫���ˣ�������%d�ξͲµ��𰸡�\n",count);
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
