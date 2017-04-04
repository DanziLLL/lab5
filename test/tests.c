#include <ctest.h>
#include "solve.h"

CTEST(test_suite, negative_discriminant) {
    int a = 4;
    int b = 2;
    int c = 3;
    double test = discriminant(a, b, c);
    const double expected_discriminant = -44;
    ASSERT_DBL_NEAR(expected_discriminant, test);
}

CTEST(test_suite, two_roots) {
    int a = 8;
    int b = 2;
    int c = -1;
    int roots  = solve(a, b, c);
    const int expected_roots = 2;
    ASSERT_EQUAL(expected_roots, roots);
}

CTEST(test_suite, one_root) {
    int a = 1;
    int b = -6;
    int c = 9;
    int roots = solve(a, b, c);
    const int expected_roots = 1;
    ASSERT_EQUAL(expected_roots, roots);
}

CTEST(test_suite, no_roots) {
    int a = 1;
    int b = 0;
    int c = 25;
    int roots = solve(a, b, c);
    const int expected_roots = 0;
    ASSERT_EQUAL(expected_roots, roots);
}


