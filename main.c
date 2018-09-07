#include<stdio.h>
#include"head.h"

int main( int argc,char * argv[] ){
	int a,b,c;
	printf("输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	//printf("二个数的最大公约数是:%d最小公倍数是:%d\n",gcd3(a,b),min(a,b,gcd3(a,b)));
	printf("三个数的最大公约数是:%d\n",gcd(gcd(a,b),c));
	return 0;
}