#include <stdlib.h>
#include "ctest.h"
#include "../src/deposit.h"

CTEST(suite1, test1) {
	int real = data_check(10000, 1111);
	int expected = 0;
	ASSERT_EQUAL(real, expected);
}

CTEST(suite1, test2) {
    int real = data_check(9000, 210);
	int expected = 0;
	ASSERT_EQUAL(expected, real);
}

CTEST(suite2, test3) {
    int real = data_check(100000, 365);
	int expected = 1;
	ASSERT_EQUAL(expected, real);
}
