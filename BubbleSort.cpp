//worked with jona 

#include "BubbleSort.h"
#include <iostream>
#include <vector>
#include <utility>

std::vector<int> BubbleSort::sort(std::vector<int> list) {
  int swaping;
  while (swaping > -1) {
    swaping = -1;
    for (int i = 1; i <= (list.size() - 1); i++) {  // repeat for all the elements of vector list.
      if (list[i - 1] > list[i]) {  // check if element i is bigger than element i + 1
        std::swap(list[i-1], list[i]); // swap elements
        swaping = i; // change variable to element swapped
      }
    };
  }
  return list;
}

