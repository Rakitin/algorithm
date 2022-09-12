#pragma once

#include <vector>

void insertion_sort(std::vector<int> &arr)
{
    for (unsigned i = 1; i < arr.size(); ++i) {
        int tmp = arr[i];
        int j = i - 1;
        while (tmp < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
}
