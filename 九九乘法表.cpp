
//  九九乘法表
//需要控制空格 


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
			
			//如果小于10，就输出3个空格，否则输出2个 
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
