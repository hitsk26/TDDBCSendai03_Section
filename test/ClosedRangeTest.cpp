#include "CppUTest/TestHarness.h"

extern "C"
{
#include "../src/ClosedRange.h"

}

TEST_GROUP(ClosedRange){
	ClosedRange r;
	void setup(){
		ClosedRange_Create(&r,3,8);
	}
	void teardown(){

	}

};

TEST(ClosedRange,getLowerEndPoint){

	LONGS_EQUAL(3,ClosedRange_getLowerEndPoint(&r));

}

TEST(ClosedRange,getUpperEndPoint){
		LONGS_EQUAL(8,ClosedRange_getUpperEndPoint(&r));
}

TEST(ClosedRange,getCharacterClosedRange){
	char str[100];

	STRCMP_EQUAL("[3,8]",ClosedRange_getCharacterExpression(&r,str));

}
TEST(ClosedRange,getCharacterClosedRangeDoubleDigits)
{
ClosedRange r_30_800;
ClosedRange_Create(&r_30_800,30,800);
char str[100];

STRCMP_EQUAL("[30,800]",ClosedRange_getCharacterExpression(&r_30_800,str));
}


