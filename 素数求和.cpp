#include<stdio.h>
#include<iostream>

//ͳ�Ʊ�����nm�������ĸ���������������� �����ּ��ÿո���� 

int main(){
	
	int i;
	int n,m;
	int cnt;
	int sum;
	
	scanf("%d %d",&n,&m);
	
	if(m=1){ 
	//1�������������ų�
		m = 2;
	} 
	for( i=m; i <=n; i++ ){
		//�ж�i�ǲ�������
		int isPrime = 1;
		int k;
		for (k=2; k <i-1; k++){
			if(i % k == 0 ){
				isPrime = 0 ;
				break ;
				
			}
		}
		
		if( isPrime){
			
			cnt ++;
			sum += i;
			
		} 
		
	} 
	
	printf("%d %d\n",cnt,sum);
	
	
	
	
	
	system("pause");
	return 0;
	
}
