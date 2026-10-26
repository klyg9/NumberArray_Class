//
// Created by Kely Gbedemah on 10/25/26.
//

#ifndef NUMBERARRAY_CLASS_NUMBERARRAY_H
#define NUMBERARRAY_CLASS_NUMBERARRAY_H
/*
 *NumberArray Class
 *
 *Stores numbers in a dynamically allocated array
 *
 *Class invariant;
 *The array sizes must be greater than zero.
 *The data pointer must point to a valid array.
 *All elements are initialized to 0.0.
 *
 *The constructor allocates memory using new[].
 *The destructor releases memory using delete[].
 */

class NumberArray {
    private:
    int size;
    double*data;
    static const int MAX_SIZE = 10;

    public:
    NumberArray(int size= MAX_SIZE);
    ~NumberArray();
    NumberArray(const NumberArray &) = delete;
    NumberArray & operator=(const NumberArray &) = delete;
};
void setNumber(int index, double value);
double getNumber(int index) const;
double getLowest() const;
double getHighest() const;
double getAverage() const;

#endif //NUMBERARRAY_CLASS_NUMBERARRAY_H
