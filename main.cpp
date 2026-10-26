#include <iostream>
#include "NumberArray.h"


int main() {
    NumberArray numbers(5);

    numbers.setNumber(0,8.5);
    numbers.setNumber(1,3.2);
    numbers.setNumber(2,10.0);
    numbers.setNumber(3,1.5);
    numbers.setNumber(4,6.0);

    numbers.print();

    std::cout << "Minimum: " << numbers.getMin() << std::endl;
    std::cout << "Maximum: " << numbers.getMax() << std::endl;
    std::cout << "Average: " << numbers.getAverage() << std::endl;


    std::cout << "Invalid index -1: "
          << numbers.getNumber(-1) << std::endl;

    std::cout << "Invalid index 5: "
              << numbers.getNumber(5) << std::endl;

    numbers.setNumber(-1, 100);
    numbers.setNumber(5, 200);

    std::cout << "Array after invalid changes: ";
    numbers.print();


    std::cout << "\nTesting default constructor:" << std::endl;

    NumberArray defaultArray;
    defaultArray.print();

    std::cout << "Default average: "
              << defaultArray.getAverage() << std::endl;


    std::cout << "\nTesting single-element array:" << std::endl;

    NumberArray singleArray(1);
    singleArray.setNumber(0, -7.5);

    singleArray.print();

    std::cout << "Minimum: " << singleArray.getMin() << std::endl;
    std::cout << "Maximum: " << singleArray.getMax() << std::endl;
    std::cout << "Average: " << singleArray.getAverage() << std::endl;

    std::cout << "\nTesting invalid array size:" << std::endl;

    NumberArray invalidArray(-3);
    invalidArray.print();

    std::cout << "Average: "
              << invalidArray.getAverage() << std::endl;


    return 0;
}
