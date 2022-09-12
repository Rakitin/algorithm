#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> arr{1, 3, 5, 7};
    assert_that(bsearch(arr, 2) == -1, "");
}

void test_2()
{
    std::vector<int> arr{1, 3, 5, 7};
    assert_that(bsearch(arr, 1) == 0, "");
}

void test_3()
{
    std::vector<int> arr{1, 3, 5, 7};
    assert_that(bsearch(arr, 7) == 3, "");
}

void test_4()
{
    std::vector<int> arr{1, 3, 5, 7};
    assert_that(bsearch(arr, 5) == 2, "");
}

int main()
{
    run_test(test_1, "test_1");
    run_test(test_2, "test_2");
    run_test(test_3, "test_3");
    run_test(test_4, "test_4");

    return 0;
}
