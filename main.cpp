#include <iostream>
#include "Heap.h"


int main() {
    Heap<uint32_t> min_heap;

    min_heap.insert(15);
    std::cout << min_heap.top() << std::endl;

    min_heap.insert(4);
    std::cout << min_heap.top() << std::endl;

    min_heap.insert(10);
    std::cout << min_heap.top() << std::endl;

    return 0;
}
