#include<stdio.h>
int main()
{
	
	int hour1,minute1;
	int hour2,minute2;
	
	printf("�����뿪ʼʱ��\n"); 

	scanf("%d",&hour1);
	printf("%dСʱ\n",hour1);

	scanf("%d",&minute1);
	printf("%d����\n",minute1);
	
	
	printf("���������ʱ��\n");
	
	scanf("%d",&hour2); 
	printf("%dСʱ\n",hour2); 
	
	
	scanf("%d",&minute2); 
	printf("%d����\n",minute2);//��ģ�����Щ�ظ��Ķ���Ҳͦ��ʱ�� 
	
	
	int ih=hour2-hour1;
	int im=minute2-minute1;
	
	
	//����������������if��ִ��{}����Ķ��� 
	if(im<0){
		im=60+im;
		ih --;
	} 
	
	
	
	
	
	printf("ʱ�����%dСʱ%d�֡�\n",ih,im) ;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
