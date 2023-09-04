//worked with jona 
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <vector>

bool RecursiveBinarySearch::search(std::vector<int> list, int n) {
    for (int i = 0; i <= list.size(); i++) {
        if (list[i] == n) {
            return true;
        }
    }
    return false;
}