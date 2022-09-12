#pragma once

#include <vector>

void selection_sort(std::vector<int> &arr)
{
    for (unsigned i = 0; i < arr.size() ; ++i) {
        unsigned idx_min = i;
        for (unsigned j = i; j < arr.size(); ++j) {
            if (arr[idx_min] > arr[j]) {
                idx_min = j;
            }
        }
        if (i != idx_min) {
            int tmp = arr[i];
            arr[i] = arr[idx_min];
            arr[idx_min] = tmp;
        }
    }
}
