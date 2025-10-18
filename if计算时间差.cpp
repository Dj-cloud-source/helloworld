#include<stdio.h>
int main()
{
	
	int hour1,minute1;
	int hour2,minute2;
	
	printf("请输入开始时间\n"); 

	scanf("%d",&hour1);
	printf("%d小时\n",hour1);

	scanf("%d",&minute1);
	printf("%d分钟\n",minute1);
	
	
	printf("请输入结束时间\n");
	
	scanf("%d",&hour2); 
	printf("%d小时\n",hour2); 
	
	
	scanf("%d",&minute2); 
	printf("%d分钟\n",minute2);//吗的，打这些重复的东西也挺费时间 
	
	
	int ih=hour2-hour1;
	int im=minute2-minute1;
	
	
	//如果（）里面成立，if就执行{}里面的东西 
	if(im<0){
		im=60+im;
		ih --;
	} 
	
	
	
	
	
	printf("时间差是%d小时%d分。\n",ih,im) ;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
