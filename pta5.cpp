#include<stdio.h>
//计算摄氏温度
int main(){
	
	//C=5 x (F - 32)/9
	int C = 0;
	int F = 0;
	
	//scanf("%d",&C);//错误：变量取了c 
	scanf("%d",&F);
	
	C = 5 * (F-32)/9 ;
	printf("Celsius = %d",C);
	 
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
