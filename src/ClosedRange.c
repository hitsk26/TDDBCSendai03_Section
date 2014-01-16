#include "ClosedRange.h"



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
