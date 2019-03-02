#include <stdlib.h>
#include "ctest.h"
#include "../src/deposit.h"


CTEST(suite2, test4) {
    double real = calculate_deposit(100000, 365);
	double expected = 112000.;
	ASSERT_EQUAL(expected, real);
}

CTEST(suite2, test5) {
    double real = calculate_deposit(100000, 10);
	double expected = 99726.;
	ASSERT_EQUAL(expected, real);
}

CTEST(suite3, test6) {
    double real = calculate_deposit(100000, 100);
	double expected = 100547.;
	ASSERT_EQUAL(expected, real);
}

CTEST(suite3, test7) {
    double real = calculate_deposit(125000, 100);
	double expected = 100547.;
	ASSERT_EQUAL(expected, real);
}
