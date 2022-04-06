//
// Created by 19012 on 4/5/2022.
//

#ifndef PROJECT2_HEAP_H
#define PROJECT2_HEAP_H


#include <vector>
#include <cstdint>

const uint32_t DEFAULT(50);



template <typename T>
class Heap {
public:
    /**
     * Constructors / assignment operators
     */
    Heap();

    //copy constructor
    Heap(const Heap& other) = default;

    Heap& operator=(const Heap& other);

    ~Heap() = default;


    /**
     * Modifiers
     */
    void insert(const T& item);

    void pop();

    const T& top() const;


private:
    std::vector<T> nodes; // actual underlying node structure

    uint32_t size;
};


#include "Heap.cpp"


#endif //PROJECT2_HEAP_H
