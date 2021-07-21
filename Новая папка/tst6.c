#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
int function_ddf();

int a, d;

static void test_1(void** state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
    a = 12, d = 4,

    assert_int_equal(function_ddf(), 1);
    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_1),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}