//worked with jona 
#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

int main() {
    int inputUser;
    std::vector<int> user;
    while (std::cin >> inputUser) {
        user.push_back(inputUser);
    }
    

    BubbleSort bs;
    QuickSort qs;

    std::vector<int> sorted_q = qs.sort(user);
    std::vector<int> sorted_v = bs.sort(user);

    int check = 0;
    for (int i = 0; i < sorted_v.size(); i++) {
        if (sorted_v[i] == 1) {
            std::cout << "true ";
            check = 1;
            break;
        }
    }

    if (check != 1) {
        std::cout << "false ";
    }

    for (int i = 0; i < sorted_v.size(); i++) {
        std::cout << sorted_v[i] << " ";
    }

    return 0;
}