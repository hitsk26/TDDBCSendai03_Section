#include "ClosedRange.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX_CHAR 50


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
	sprintf(str,"[%d,%d]",ClosedRange_getLowerEndPoint(r),ClosedRange_getUpperEndPoint(r));
	return str;
}

