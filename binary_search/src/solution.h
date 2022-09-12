#pragma once

#include <vector>

int bsearch(const std::vector<int> &arr, int i)
{
    int start = 0;
    int end = arr.size();
    while (start < end) {
        int mid = (start + end) / 2;
        if (arr[mid] == i) {
            return mid;
        }
        else if (i > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }
    return -1;
}
