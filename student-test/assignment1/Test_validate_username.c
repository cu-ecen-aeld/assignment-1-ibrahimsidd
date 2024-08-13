#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "../../examples/autotest-validate/autotest-validate.h"
#include "../../assignment-autotest/test/assignment1/username-from-conf-file.h"

/**
* This function should:
*   1) Call the my_username() function in autotest-validate.c to get your hard coded username.
*   2) Obtain the value returned from function malloc_username_from_conf_file() in username-from-conf-file.h within
*       the assignment autotest submodule at assignment-autotest/test/assignment1/
*   3) Use unity assertion TEST_ASSERT_EQUAL_STRING_MESSAGE to verify the two strings are equal.  See
*       the [unity assertion reference](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityAssertionsReference.md)
*/
void test_validate_my_username()
{

    const char * expected = my_username();
    printf("this is expected value from my_username function %s\n",expected);
    char * actual = malloc_username_from_conf_file();
    printf("this is actual value from malloc_username_from_conf_file() %s\n",actual);
    TEST_ASSERT_EQUAL_STRING(expected,actual);
    //TEST_ASSERT_TRUE_MESSAGE(True,"AESD is fixed");
}
