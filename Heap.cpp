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


/**
 * MODIFIERS
 */
 template <typename T>
 void Heap<T>::insert(const T &item) {
     uint32_t pos = size + 1;
     std::vector<T> temp(nodes);
     temp.push_back(item);

     uint32_t current = (pos / 2) - 1;

     while (size > 0 && item < temp[current]) {
         temp[pos - 1] = temp[current];
         temp[current] = item;

         pos = pos / 2;
     }

     ++size;
     nodes = temp;
 }


 template <typename T>
 void Heap<T>::pop() {
     uint32_t pos = 1;
     std::vector<T> temp(nodes);
     temp[pos - 1] = temp[size - 1];

     uint32_t current;
     while (temp[pos - 1] > temp[(2 * pos) - 1] || temp[pos - 1] > temp[2 * pos]) {
         uint32_t _temp = temp[pos - 1];
     }

 }