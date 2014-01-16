#include "ClosedRange.h"
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 50

static char *itoa( int val, char *a, int radix );
void initialize_string(char *str,int length);

void ClosedRange_Create(ClosedRange *r,int lowerEndPoint,int upperEndPoint){
	r->lowerEndPoint=lowerEndPoint;
	r->upperEndpoint=upperEndPoint;

}

int ClosedRange_getLowerEndPoint(ClosedRange *r){

	return r->lowerEndPoint;
}

int ClosedRange_getUpperEndPoint(ClosedRange *r){
	return r->upperEndpoint;
}

char *ClosedRange_getCharacterExpression(ClosedRange *r,char *str)
{
	char *pointer;

	int len;

	initialize_string(str,100);
	str[0] = '[';

	itoa(ClosedRange_getLowerEndPoint(r),&str[1],10);

	len=0;

	len= strlen(str);
	str[len]=',';

	pointer = &str[len+1];
	itoa(ClosedRange_getUpperEndPoint(r),pointer,10);
	len= strlen(str);

	pointer = &str[len];

	pointer[0] = ']';

	return str;
}

char *itoa( int val, char *a, int radix )
{
	char *p = a;
	unsigned int v = val;/* 作業用(変換対象の値) */
	int n = 1;/* 変換文字列の桁数記憶用 */
	while(v >= radix){/* 桁数を求める */
		v /= radix;
		n++;
	}
	p = a + n; /* 最下位の位置から設定する */
	v = val;
	*p = '\0';/* 文字列終端の設定 */
	do {
		--p;
		*p = v % radix + '0';/* 1桁の数値を文字に変換 */
		if(*p > '9') {/* 変換した文字が10進で表現できない場合 */
			*p = v % radix - 10 + 'A'; /* アルファベットを使う */
		}
		v /= radix;
	} while ( p != a);
	return a;
}

void initialize_string(char *str,int length)
{
	int i =0;
	for(i=0;i<length;++i){
		str[i] = '\0';
	}
}

