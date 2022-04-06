//
// Created by 19012 on 4/5/2022.
//


template <typename T>
Heap<T>::Heap() : size(0) {}


template <typename T>
Heap<T>& Heap<T>::operator=(const Heap<T> &other) {
    if (this == &other) {
        return *this;
    }

    Heap temp(other);
    std::swap(size, temp.size);
    std::swap(nodes, temp.nodes);

    return *this;
}



template <typename T>
const T& Heap<T>::top() const {
    if (size == 0) {
        throw std::exception();
    }

    return *(nodes.cbegin());
}


template <typename T>
bool Heap<T>::isEmpty() const noexcept {
    return size == 0;
}


/**
 * MODIFIERS
 */
 template <typename T>
 void Heap<T>::insert(const T &item) {
     uint32_t pos = size + 1;
     std::vector<T> temp(nodes);
     temp.push_back(item);

     uint32_t current = (pos / 2) - 1;

     while (pos > 1 && item < temp[current]) {
         temp[pos - 1] = temp[current];
         temp[current] = item;

         pos = pos / 2;
         current  = (pos / 2) - 1;
     }

     nodes = temp;
     ++size;
 }


 //pop the minimum from the vector (root of the binary tree)
 //the largest value will float down to re-heapify the data structure
 template <typename T>
 void Heap<T>::pop() {
     uint32_t pos = 1;
     std::vector<T> temp(nodes);
     temp[pos - 1] = temp[size - 1];
     temp.resize(size - 1);

     while (((2 * pos) - 1 < size - 1 && temp[pos - 1] > temp[(2 * pos) - 1])
                || (2 * pos < size - 1 && temp[pos - 1] > temp[2 * pos])) {

         T _temp = temp[pos - 1];
         if (2 * pos > size - 1 || temp[(2 * pos) - 1] < temp[2 * pos]) {
             temp[pos - 1] = temp[(2 * pos) - 1];
             temp[(2 * pos) - 1] = _temp;

             pos = 2 * pos;
         } else {
             temp[pos - 1] = temp[2 * pos];
             temp[2 * pos] = _temp;
             pos = (2 * pos) + 1;
         }
     }

     nodes = temp;
     --size;
 }