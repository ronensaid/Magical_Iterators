#include "MagicalContainer.hpp"
using namespace ariel;
MagicalContainer::MagicalContainer()
{
}

void MagicalContainer::addElement(int element)
{
}

void MagicalContainer::removeElement(int element)
{
}

size_t MagicalContainer::size() const
{

    return 0;
}

////////////////////////////////////////////////////////////AscendingIterator///////////////////////////////////////////////////////////
MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer &container)
    : container(container), position(0)
{
    // Empty body
}

// Copy Constructor
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other)
    : container(other.container), position(other.position)
{
    // Empty body
}

// Destructor
MagicalContainer::AscendingIterator::~AscendingIterator()
{
    // Empty body
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
{
    // Empty method body
    return *this; // Placeholder return
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

int MagicalContainer::AscendingIterator::operator*() const
{
    // Empty method body
    return 0; // Placeholder return
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
{
    // Empty method body
    return *this; // Placeholder return
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin()
{
    // Empty method body
    return *this; // Placeholder return
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end()
{
    // Empty method body
    return *this; // Placeholder return
}

//////////////////////////////////////////////////////PrimeIterator////////////////////////////////////////////////////////////////////
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer &container)
    : container(container), position(0)
{
    // Empty body
}

// Copy Constructor
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other)
    : container(other.container), position(other.position)
{
    // Empty body
}

// Destructor
MagicalContainer::PrimeIterator::~PrimeIterator()
{
    // Empty body
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    // Empty method body
    return *this; // Placeholder return
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

int MagicalContainer::PrimeIterator::operator*() const
{
    // Empty method body
    return 0; // Placeholder return
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
{
    // Empty method body
    return *this; // Placeholder return
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
{
    // Empty method body
    return *this; // Placeholder return
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
{
    // Empty method body
    return *this; // Placeholder return
}

////////////////////////////////////////////////SideCrossIterator////////////////////////////////////////////////////////////////////////////////
MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer &container)
    : container(container), position(0)
{
    // Empty body
}

// Copy Constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other)
    : container(other.container), position(other.position)
{
    // Empty body
}

// Destructor
MagicalContainer::SideCrossIterator::~SideCrossIterator()
{
    // Empty body
}


MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
    // Empty method body
    return *this; // Placeholder return
}

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    // Empty method body
    return false; // Placeholder return
}

int MagicalContainer::SideCrossIterator::operator*() const
{
    // Empty method body
    return 0; // Placeholder return
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
{
    // Empty method body
    return *this; // Placeholder return
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin()
{
    // Empty method body
    return *this; // Placeholder return
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end()
{
    // Empty method body
    return *this; // Placeholder return
}