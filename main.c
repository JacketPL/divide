#include<stdio.h>
#include"head.h"

int main( int argc,char * argv[] ){
	int a,b,c;
	printf("������������\n");
	scanf("%d %d %d",&a,&b,&c);
	//printf("�����������Լ����:%d��С��������:%d\n",gcd3(a,b),min(a,b,gcd3(a,b)));
	printf("�����������Լ����:%d\n",gcd(gcd(a,b),c));
	return 0;
}