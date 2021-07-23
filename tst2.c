#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
int function_mg2();

int metr1, metr2, metr3, metr4;

static void test_1(void** state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
    metr1 = 2000, metr2 = 3000, metr3 = 1000, metr4 = 1000;

    assert_int_equal(function_mg2(), 0);
    // все, заканчиваем... ниже ничего писать не надо
}

static void test_2(void** state) {

    // вот здесь (то есть ниже) вы можете делать все что захотите (в пределах синтаксиса языка Си)
    metr1 = 2000, metr2 = 3000, metr3 = 3000, metr4 = 1000;

    assert_int_equal(function_mg2(), 1);
    // все, заканчиваем... ниже ничего писать не надо
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_1),
        cmocka_unit_test(test_2),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}