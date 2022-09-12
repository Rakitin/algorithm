#include <iostream>
#include "solution.h"
#include "test.h"

void test_1()
{
    std::vector<int> arr {3, 8, 5, 1, 7, 2, 9, 4, 6};
    insertion_sort(arr);
    assert_that(arr == std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9}, "");
}


int main()
{
    run_test(test_1, "test_1");
//    run_test(test_2, "test_2");
//    run_test(test_3, "test_3");
//    run_test(test_4, "test_4");

    return 0;
}
