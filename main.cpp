#include <iostream>
#include "Heap.h"
#include "heap_sort.cpp"
#include <iterator>


int main() {


    std::vector<uint32_t> nums = {1, 2, 5, 10, 3, 7, 11, 15, 17, 20, 9, 15, 8, 16, 20};
    heap_sort<uint32_t>(nums.begin(), nums.end(), nums.begin());

    std::copy(nums.begin(), nums.end(), std::ostream_iterator<uint32_t>(std::cout, " "));

    return 0;
}