
//  �žų˷���
//��Ҫ���ƿո� 


#include<stdio.h>
#include<iostream>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int i,j ;
	
	i=1;
	
	while (i <= n){
		j = 1 ;
		while( j <= i){
			printf("%d*%d=%d",j ,i,i*j);
			
			//���С��10�������3���ո񣬷������2�� 
			if ( i * j < 10){  
				printf("   ");
			}else{
				printf("  ");
			} 
			j ++ ;
			
			
		}
		printf("\n");
		i ++; 
	} 
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	
	return 0;
	
} 
