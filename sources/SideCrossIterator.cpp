#include "SideCrossIterator.hpp"
#include "MagicalContainer.h"
SideCrossIterator::SideCrossIterator(const MagicalContainer &container) : container(container)
{
}

SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container)
{
}

SideCrossIterator::~SideCrossIterator()
{
}

SideCrossIterator &SideCrossIterator::operator=(const SideCrossIterator &other)
{
    if (this != &other)
    {
    }
    return *this;
}

bool SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    return false;
}

bool SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    return false;
}

bool SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    return false;
}

bool SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    return false;
}

int SideCrossIterator::operator*() const
{
    return 0;
}

SideCrossIterator &SideCrossIterator::operator++()
{
    return *this;
}

SideCrossIterator &SideCrossIterator::begin()
{
    position = 0; // Point to the first element
    return *this;
}

SideCrossIterator &SideCrossIterator::end()
{
    position = container.size(); // Point to one past the last element
    return *this;
}