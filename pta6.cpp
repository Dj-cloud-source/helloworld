#include<stdio.h>
//	整数四则运算
int main(){
	
	int A = 0;
	int B = 0; 
	
	
	
	
	
//	int sum = A+B;
//	int dif = A-B;
//	int pro = A*B;
//	int qou = A/B;
//	
//	scanf("%d %d",&A,&B);
//错误：scanf放在运算前，导致无效 
	scanf("%d %d",&A,&B);

	int sum = A+B;
	int dif = A-B;
	int pro = A*B;
	int qou = A/B;
	
	
	
//	printf("%d + %d = %d\n",sum);
//	printf("%d - %d = %d\n",dif);
//	printf("%d * %d = %d\n",pro);
//	printf("%d / %d = %d\n",qou);
//错误：只提供了一个参数 
	
	
	printf("%d + %d = %d\n",A,B,sum);
	printf("%d - %d = %d\n",A,B,dif);
	printf("%d * %d = %d\n",A,B,pro);
	printf("%d / %d = %d\n",A,B,qou);
	
	
	
	
	return 0;
	
}
