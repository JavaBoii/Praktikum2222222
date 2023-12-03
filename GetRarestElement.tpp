#ifndef GETRARESTELEMENT_TPP
#define GETRARESTELEMENT_TPP

#include "GetRarestElement.h"

template <typename T>
T getRarestElement(T* array, size_t size) {
    if (size == 0) {
        throw std::runtime_error("Array is empty");
    }

    std::unordered_map<T, int> countMap;
    for (size_t i = 0; i < size; ++i) {
        countMap[array[i]]++;
    }

    T rarestElement = array[0];
    int minCount = countMap[array[0]];

    for (auto& pair : countMap) {
        if (pair.second < minCount) {
            minCount = pair.second;
            rarestElement = pair.first;
        }
    }

    return rarestElement;
}

#endif // GETRARESTELEMENT_TPP
