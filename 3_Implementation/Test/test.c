#include "fun.h"
#include "unity.h"
#include "struct.h"

void test_searchrecords(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_searchrecords);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
    char smartcardnumber[20]="KHY123456";
    TEST_ASSERT_EQUAL("KHY123456", smartcardnumber);
   
}