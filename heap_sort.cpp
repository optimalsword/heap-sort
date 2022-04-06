//
// Created by 19012 on 4/5/2022.
//


#include "Heap.h"
#include <algorithm>



/**
 *   Takes a container and sorts its elements in increasing order
 *   Operates over iterators
 *
 */
template <typename data, typename IT>
void heap_sort(IT begin, IT end, IT output) {
    Heap<data> heap;

    //construct the heap
    std::for_each(begin, end, [&heap] (data& item) {
        heap.insert(item);
    });

    //take off the heap. will be sorted!
    while (!heap.isEmpty()) {
        *output = heap.top();
        heap.pop();

        ++output;
    }
}