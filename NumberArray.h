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
 *All elements are initialized to 0.0 when the array is created
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
    /**
 * Purpose: Creates an array of the requested size.
 * Input: size - number of elements.
 * Precondition: None.
 * Postcondition: Allocates memory and initializes all elements to 0.
 *                Invalid sizes use MAX_SIZE.
 */
    NumberArray(int size= MAX_SIZE);

    /**
 * Purpose: Releases the memory used by the array.
 * Input: None.
 * Precondition: The object has been created.
 * Postcondition: The allocated memory is released.
 */
    ~NumberArray();

    /**
 * Purpose: Prevents copying NumberArray objects.
 * Input: Another NumberArray object.
 * Precondition: None.
 * Postcondition: Copying and assignment are not allowed.
 *               This prevents problems with shared memory.
 */
    NumberArray(const NumberArray &) = delete;
    NumberArray & operator=(const NumberArray &) = delete;


    /**
     * Purpose: Changes an element in the array.
     * Input: index - position in the array.
     *        value - new number to store.
     * Precondition: None.
     * Postcondition: Updates the element if the index is valid.
     *                Invalid indexes leave the array unchanged.
     */
    void setNumber(int index, double value);

    /**
 * Purpose: Returns a number from the array.
 * Input: index - position of the number.
 * Precondition: None.
 * Postcondition: The array is not changed.
 * Return: The number at the given index.
 *         Returns 0.0 if the index is invalid.
 */
    double getNumber(int index) const;

    /**
     * Purpose: Finds the smallest number in the array.
     * Input: None.
     * Precondition: The array contains at least one element.
     * Postcondition: The array is not changed.
     * Return: The smallest number in the array.
     */
    double getMin() const;

    /**
     * Purpose: Finds the largest number in the array.
     * Input: None.
     * Precondition: The array contains at least one element.
     * Postcondition: The array is not changed.
     * Return: The largest number in the array.
     */
    double getMax() const;

    /**
     * Purpose: Calculates the average of all array elements.
     * Input: None.
     * Precondition: The array contains at least one element.
     * Postcondition: The array remains unchanged.
     * Return: The sum of all elements divided by the array size.
     */
    double getAverage() const;

    /**
     * Purpose: Displays all numbers stored in the array.
     * Input: None.
     * Precondition: The array has been initialized.
     * Postcondition: All elements are printed to the console.
     *                The array remains unchanged.
     */
    void print() const;
};
#endif //NUMBERARRAY_CLASS_NUMBERARRAY_H
