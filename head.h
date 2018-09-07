#ifndef __HEAD_H
#define __HEAD_H

int gcd( int a, int b ){
	if( a < b ){
		int tmp = a;
		a = b;
		b = tmp;
	} // ��֤a ����b
	if( a == b ) return a;
	if( a % 2 == 0 && b % 2 == 0 ) return 2 * gcd( a / 2, b / 2 );
	a = a - b;
	return gcd( a, b);

}

int gcd1( int a ,int b){
	if( a < b ){
		int tmp = a;
		a = b;
		b = tmp;
	} // ��֤a ����b
	if( b == 0 ) return a;
	if( a % 2 == 0 && b % 2 == 0 ) return 2*gcd1( a/2 , b/2);
	if( a % 2 == 0 ) return gcd1( a / 2,b );
	if( b % 2 == 0 ) return gcd1( a, b / 2 );
	return gcd1( ( a + b ) / 2,( a - b ) / 2 );


}

int gcd2( int a, int b ){
	int c;
	if( a < b ){
		int tmp = a;
		a = b;
		b = tmp;
	} // ��֤a ����b	
	if( a % b == 0 ) return b;
	return gcd2( b , a % b );
}//�ݹ�ʵ��

//�ǵݹ�ʵ��
int gcd3( int a,int b ){
	
	if( a < b ){
		int tmp = a;
		a = b;
		b = tmp;
	} // ��֤a ����b	
	while( 1 ){
		int tmp = a;
		if( a % b == 0 ) break;
		a = b;

		b = tmp % b;
		
	}
	return b;
}
/*��С������*/
int min( int a,int b,int c ){
	return a * b / c;
}

#endif
