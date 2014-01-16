#ifndef CLOSEDRANGE_H
#define CLOSEDRANGE_H

typedef struct Range{
	int lowerEndPoint;
	int upperEndpoint;
}ClosedRange;


void ClosedRange_Create(ClosedRange *r,int lowerEndPoint,int upperEndPoint);

int ClosedRange_getLowerEndPoint(ClosedRange *r);

#endif
