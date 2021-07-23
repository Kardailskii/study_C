#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
int a, b, c, d;
int quantity;
int function_qqz();


static void test_1(void** state) 
{
    a = 11, b = 12, c = 16, d = 14, quantity = 4;
    assert_int_equal(function_qqz(), 16);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_1),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}