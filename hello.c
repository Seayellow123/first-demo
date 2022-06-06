#include<stdio.h>
void main(){
	int a[5]={2,4,6,8,9};
	int x,i,flag=1;
	printf("请输入一个整数：");
	scanf("%d",&x);
	for(i=0;i<5;i++)
	{
		if(x==a[i])
		{
			printf("index:%d",i);
			flag=0;
		}
	}
	 	if(flag==1)
	 	printf("index:-1");
	printf("hello word");
}
