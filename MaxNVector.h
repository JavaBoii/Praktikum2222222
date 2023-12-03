#ifndef MAXNVECTOR_H
#define MAXNVECTOR_H

#include <vector>
#include <stdexcept>

class ElementTooFrequentException : public std::exception {
public:
    const char* what() const throw() {
        return "Element occurs too frequently";
    }
};

template <typename T, int N>
class MaxNVector {
public:
    MaxNVector() {}
    ~MaxNVector() {}

    void add(T element);
    void removeAt(size_t index);
    T& operator[](size_t index);
    const T& operator[](size_t index) const;

private:
    std::vector<T> data;
    int count(T element) const;
};

#include "MaxNVector.tpp"

#endif // MAXNVECTOR_H
