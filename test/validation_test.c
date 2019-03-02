#include <stdlib.h>
#include "ctest.h"
#include "../src/deposit.h"

CTEST(suite1, test1) {
	int real = data_check(10000, 1111);
	int expected = 0;
	ASSERT_EQUAL(real, expected);
}
