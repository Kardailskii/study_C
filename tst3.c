#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"

int function_year(int year);

static void test_1(void** state) {

    // ��� ����� (�� ���� ����) �� ������ ������ ��� ��� �������� (� �������� ���������� ����� ��)
    int year = 1700;

    assert_int_equal(function_year(year), 12);
    // ���, �����������... ���� ������ ������ �� ����
}

static void test_2(void** state) {

    // ��� ����� (�� ���� ����) �� ������ ������ ��� ��� �������� (� �������� ���������� ����� ��)
    int year = 1918;

    assert_int_equal(function_year(year), 26);
    // ���, �����������... ���� ������ ������ �� ����
}

static void test_3(void** state) {

    // ��� ����� (�� ���� ����) �� ������ ������ ��� ��� �������� (� �������� ���������� ����� ��)
    int year = 1919;

    assert_int_equal(function_year(year), 13);
    // ���, �����������... ���� ������ ������ �� ����
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_1),
        cmocka_unit_test(test_2),
        cmocka_unit_test(test_3),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}