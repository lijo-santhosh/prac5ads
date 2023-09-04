//worked with jona 
#include "QuickSort.h"
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    int pivot = list[2];
    int L = 0;
    int R = list.size() - 1;
    for (int l = 0; l <= list.size(); l++) {
        if (list[l] >= pivot) {
            L = l;
            break;
        }
    }
    for (int r = list.size(); r >= 0; r--) {
        if (list[r] <= pivot) {
            R = r;
            break;
        }
    }
    std::swap(list[L], list[R]);
    L++;
    R--;
    for (int l = L; l <= list.size(); l++) {
        if (list[l] >= pivot) {
            L = l;
            break;
        }
    }
    for (int r = R; r >= 0; r--) {
        if (list[r] <= pivot) {
            R = r;
            break;
        }
    }
    std::swap(list[L], list[R]);
    L++;
    R--;
    return list;
}