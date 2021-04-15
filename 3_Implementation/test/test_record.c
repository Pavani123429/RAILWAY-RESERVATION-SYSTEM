#include "FUNCTIONS.H"
#include "unity.h"
#include "unity_internals.h"

#define LEN 100
#define WID 80

    
     void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}
void test_bsort(void){

    TEST_ASSERT_EQUAL(1,start->id);
    TEST_ASSERT_EQUAL(1,start->Name);

}
void test_delete(void){
    TEST_ASSERT_EQUAL(SUCCESS, delete(start,id));
}
void test_display(void){
    TEST_ASSERT_EQUAL(SUCCESS, display(start));

}
void test_search(void){
    
    TEST_ASSERT_EQUAL(SUCCESS, find_by_id(start,260842,&result));
    TEST_ASSERT_EQUAL(260842, result.id);
    TEST_ASSERT_EQUAL(0,find_by_id(start,260842,&result));

}
