#include<stdio.h>
#include<iostream>
int main(){
	//水仙花数是指N位一个整数（N>3），它的每个位上的数字的N次幂之和等于它本身
	
	int n;
	scanf("%d",&n);
	n=3;
	
	//需要 遍历  100-999
	int first = 1;
	int i = 1;
	
	while (i<n   /*会执行n-1遍*/ ){
		
		first *= 10;
		i ++ ;	
		
	}
	printf("first=%d\n",first);
	
	
	

	i=first;
	while(i < first*10){
		//要去分解i的每一位数，算出他的n次幂，然后再求和起来 
		
		int t = i;
		
		//因为分解i会破坏变量i，所以用一个中间变量记录i；
		int  sum = 0 ;
			do{
				int d = t %10;
				t /= 10;
				
				int p = 1;//d^n=d* (n-1)个d 
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
