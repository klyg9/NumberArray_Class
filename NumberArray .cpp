//
// Created by Kely Gbedemah on 10/25/26.
//

#include "NumberArray.h"
#include <iostream>

NumberArray:: NumberArray(int size) {
    if (size <= 0) {
        size = MAX_SIZE;
    }
    this->size = size;
    data = new double[size];

    for (int i = 0; i < size; i++) {
        data[i] = 0.0;
    }
}

NumberArray::~NumberArray() {
    delete[] data;
    std::cout << "NumberArray memory released." << std::endl;
}

void NumberArray::setNumber(int index, double value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

double NumberArray::getNumber(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return 0.0;
}
double NumberArray::getMin() const {
    double minimum = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < minimum) {
            minimum = data[i];
        }
    }
    return minimum;
}
double NumberArray::getMax() const {
    double maximum = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > maximum) {
            maximum = data[i];
        }
    }
    return maximum;
}
double NumberArray::getAverage() const {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += data[i];
    }
    return total / size;
}

void NumberArray::print() const {
    std::cout << "Array elements:" ;
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
