#ifndef MAXNVECTOR_TPP
#define MAXNVECTOR_TPP

#include "MaxNVector.h"

template <typename T, int N>
void MaxNVector<T, N>::add(T element) {
    if (count(element) >= N) {
        throw ElementTooFrequentException();
    }
    data.push_back(element);
}

template <typename T, int N>
void MaxNVector<T, N>::removeAt(size_t index) {
    if (index >= data.size()) {
        throw std::out_of_range("Index out of range");
    }
    data.erase(data.begin() + index);
}

template <typename T, int N>
T& MaxNVector<T, N>::operator[](size_t index) {
    if (index >= data.size()) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T, int N>
const T& MaxNVector<T, N>::operator[](size_t index) const {
    if (index >= data.size()) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T, int N>
int MaxNVector<T, N>::count(T element) const {
    int count = 0;
    for (auto& el : data) {
        if (el == element) count++;
    }
    return count;
}

#endif // MAXNVECTOR_TPP
