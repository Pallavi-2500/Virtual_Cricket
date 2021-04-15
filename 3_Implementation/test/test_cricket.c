#include "unity.h"
#include "virtualcricket.h"


    /* Modify these two lines according to the project */
    #define PROJECT_NAME "virtual cricket"

    /* Prototypes for all the test functions */
    void test_batting(void);
    void test_cricket(void);
    void test_menu(void);
    void test_result(void);
    void test_toss(void);

    /* Required by the unity test framework */
    void setUp(){}
    /* Required by the unity test framework */
    void tearDown(){}

    /* Start of the application test */
    int main(void)
    {
    /* Initiate the Unity Test Framework */
      UNITY_BEGIN();

    /* Run Test functions */
      RUN_TEST(test_batting);
      RUN_TEST(test_cricket);
      RUN_TEST(test_menu);
      RUN_TEST(test_result);
      RUN_TEST(test_toss);
      

      /* Close the Unity Test Framework */
      return UNITY_END();
    }