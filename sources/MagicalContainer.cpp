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
}

// Copy Constructor
MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other)
    : container(other.container), position(other.position)
{
}

// Destructor
MagicalContainer::AscendingIterator::~AscendingIterator()
{
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
{
    return *this; 
}

bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    return false; 
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return false; 
}

bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
{
    
    return false; 
}

bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
{
    
    return false; 
    }

int MagicalContainer::AscendingIterator::operator*() const
{
    
    return 0; 
    }

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
{
    
    return *this; 
    }

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin()
{
    
    return *this; 
    }

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end()
{
    
    return *this; 
    }

//////////////////////////////////////////////////////PrimeIterator////////////////////////////////////////////////////////////////////
MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer &container)
    : container(container), position(0)
{
    
}

// Copy Constructor
MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other)
    : container(other.container), position(other.position)
{
    
}

// Destructor
MagicalContainer::PrimeIterator::~PrimeIterator()
{
    
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
{
    
    return *this; 
    }

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
{
    
    return false; 
    }

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    
    return false; 
    }

bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
{
    
    return false; 
    }

bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
{
    
    return false; 
    }

int MagicalContainer::PrimeIterator::operator*() const
{
    
    return 0; 
    }

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
{
    
    return *this; 
    }

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
{
    
    return *this; 
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
{
   
    return *this; 
}

////////////////////////////////////////////////SideCrossIterator////////////////////////////////////////////////////////////////////////////////

MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer &container)
    : container(container), position(0)
{
    
}

// Copy Constructor
MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other)
    : container(other.container), position(other.position)
{
    
}

// Destructor
MagicalContainer::SideCrossIterator::~SideCrossIterator()
{
    
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
{
    
    return *this; 
    }

bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
{
    
    return false; 
    }

bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
{
    
    return false; 
    }

bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
{
    
    return false; 
    }

bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
{
    
    return false; 
    }

int MagicalContainer::SideCrossIterator::operator*() const
{
    
    return 0; 
    }

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
{
    
    return *this; 
    }

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin()
{
    
    return *this; 
    }

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end()
{
    
    return *this; 
    }