#include "CppUTest/TestHarness.h"

extern "C"
{
#include "../src/ClosedRange.h"

}

TEST_GROUP(ClosedRange){

	void setup(){

	}
	void teardown(){

	}

};

TEST(ClosedRange,getLowerEndPoint){
	ClosedRange r;
	ClosedRange_Create(&r,3,8);
	LONGS_EQUAL(3,ClosedRange_getLowerEndPoint(&r));

}

TEST(ClosedRange,getUpperEndPoint){
		ClosedRange r;
		ClosedRange_Create(&r,3,8);

		LONGS_EQUAL(8,ClosedRange_getUpperEndPoint(&r));
}



