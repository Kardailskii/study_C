#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
int function_mg2();

int metr1, metr2, metr3, metr4;

static void test_1(void** state) {

    // ��� ����� (�� ���� ����) �� ������ ������ ��� ��� �������� (� �������� ���������� ����� ��)
    metr1 = 2000, metr2 = 3000, metr3 = 1000, metr4 = 1000;

    assert_int_equal(function_mg2(), 0);
    // ���, �����������... ���� ������ ������ �� ����
}

static void test_2(void** state) {

    // ��� ����� (�� ���� ����) �� ������ ������ ��� ��� �������� (� �������� ���������� ����� ��)
    metr1 = 2000, metr2 = 3000, metr3 = 3000, metr4 = 1000;

    assert_int_equal(function_mg2(), 1);
    // ���, �����������... ���� ������ ������ �� ����
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_1),
        cmocka_unit_test(test_2),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}