#include "AscendingIterator.hpp"
#include "MagicalContainer.h"
AscendingIterator::AscendingIterator(const MagicalContainer &container) : container(container)
{
}

AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container)
{
}

AscendingIterator::~AscendingIterator()
{
}

AscendingIterator &AscendingIterator::operator=(const AscendingIterator &other)
{
    if (this != &other)
    {
    }
    return *this;
}

bool AscendingIterator::operator==(const AscendingIterator &other) const
{
    return false;
}

bool AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return false;
}

bool AscendingIterator::operator>(const AscendingIterator &other) const
{
    return false;
}

bool AscendingIterator::operator<(const AscendingIterator &other) const
{
    return false;
}

int AscendingIterator::operator*() const
{
    return 0;
}

AscendingIterator &AscendingIterator::operator++()
{
    return *this;
}

AscendingIterator &AscendingIterator::begin()
{
    position = 0; // Point to the first element
    return *this;
}

AscendingIterator &AscendingIterator::end()
{
    position = container.size(); // Point to one past the last element
    return *this;
}