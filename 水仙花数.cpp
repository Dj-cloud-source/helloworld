#include<stdio.h>
#include<iostream>
int main(){
	//ˮ�ɻ�����ָNλһ��������N>3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
	
	int n;
	scanf("%d",&n);
	n=3;
	
	//��Ҫ ����  100-999
	int first = 1;
	int i = 1;
	
	while (i<n   /*��ִ��n-1��*/ ){
		
		first *= 10;
		i ++ ;	
		
	}
	printf("first=%d\n",first);
	
	
	

	i=first;
	while(i < first*10){
		//Ҫȥ�ֽ�i��ÿһλ�����������n���ݣ�Ȼ����������� 
		
		int t = i;
		
		//��Ϊ�ֽ�i���ƻ�����i��������һ���м������¼i��
		int  sum = 0 ;
			do{
				int d = t %10;
				t /= 10;
				
				int p = 1;//d^n=d* (n-1)��d 
				int j = 0;
				
				while(j<n){
					p *= d;
					j ++;
					
				}
				sum += p;
				
				
			}while( t>0);
			
			if (sum == i ){
				printf("%d\n",i);
			}
		
		
		i ++;
		
		
		
	} 
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
