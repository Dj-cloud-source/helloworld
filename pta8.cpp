#include<stdio.h>
#include<math.h>
//计算分段函数[2]
int main(){
	
	double x ;
	double y ;
	scanf("%lf",&x);
	//调用sqrt平方根函数 
	if(x >= 0){
		
		y = sqrt(x);
		
		
	}	else {
		//调用pow幂函数
		 
		y = pow(x+1,2) + 2*x + 1/x ;
		
		
	}
	printf("f(%.2f) = %.2f",x,y);
	
	
	
	
	
	
	return 0;
	
}
