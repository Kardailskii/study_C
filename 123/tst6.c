#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include "cmocka\include\cmocka.h"
int function_ddf();

int a, d;

static void test_1(void** state) {

    // ��� ����� (�� ���� ����) �� ������ ������ ��� ��� �������� (� �������� ���������� ����� ��)
    a = 12, d = 4,

    assert_int_equal(function_ddf(), 1);
    // ���, �����������... ���� ������ ������ �� ����
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_1),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}