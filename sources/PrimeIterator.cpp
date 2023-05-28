#include "PrimeIterator.hpp"
#include "MagicalContainer.h"
PrimeIterator::PrimeIterator(const MagicalContainer& container) : container(container) {
}

PrimeIterator::PrimeIterator(const PrimeIterator& other) : container(other.container) {
}

PrimeIterator::~PrimeIterator() {
}

PrimeIterator& PrimeIterator::operator=(const PrimeIterator& other) {
    if (this != &other) {
    }
    return *this;
}

bool PrimeIterator::operator==(const PrimeIterator& other) const {
    return false;
}

bool PrimeIterator::operator!=(const PrimeIterator& other) const {
    return false;
}

bool PrimeIterator::operator>(const PrimeIterator& other) const {
    return false;
}

bool PrimeIterator::operator<(const PrimeIterator& other) const {
    return false;
}

int PrimeIterator::operator*() const {
    return 0;
}

PrimeIterator& PrimeIterator::operator++() {
    return *this;
}

PrimeIterator &PrimeIterator::begin()
{
    position = 0; // Point to the first element
    return *this;
}

PrimeIterator &PrimeIterator::end()
{
    position = container.size(); // Point to one past the last element
    return *this;
}