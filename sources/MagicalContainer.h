#ifndef MAGICALCONTAINER_H
#define MAGICALCONTAINER_H

#include <vector>
#include "AscendingIterator.hpp"
#include "SideCrossIterator.hpp"
#include "PrimeIterator.hpp"

class MagicalContainer {
public:
    // Constructor
    MagicalContainer();

    // Add and remove elements from the container, and get the size of the container
    void addElement(int element);
    void removeElement(int element);
    size_t size() const;


private:
    // Use a dynamic array to store elements
    std::vector<int> elements;


};

#endif //MAGICALCONTAINER_H
