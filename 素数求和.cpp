#include<stdio.h>
#include<iostream>

//统计闭区间nm内素数的个数，并对它们求和 。数字间用空格隔开 

int main(){
	
	int i;
	int n,m;
	int cnt;
	int sum;
	
	scanf("%d %d",&n,&m);
	
	if(m=1){ 
	//1不是素数，得排除
		m = 2;
	} 
	for( i=m; i <=n; i++ ){
		//判断i是不是素数
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
