#include<stdio.h>
//	计算物体自由下落的距离
int main(){
	
	//自由落体运动公式   h=1/2 g t^2 ，x=vt+1/2 g t^2
	int t = 3 ;
	int g = 10;
	 
	double h  ;
	
	h =(double) 1/2 * g * t * t;
	
	printf("height = %.2f",h);//输出小数要用%f，两位小数用%.2f 
	
	
	
	
	
	return 0;
	
}
