#pragma once
class MagicalContainer;

class PrimeIterator {
public:
    // Constructors and destructor
    PrimeIterator(const MagicalContainer& container);
    PrimeIterator(const PrimeIterator& other);
    ~PrimeIterator();

    // Assignment operator
    PrimeIterator& operator=(const PrimeIterator& other);

    // Comparison operators
    bool operator==(const PrimeIterator& other) const;
    bool operator!=(const PrimeIterator& other) const;
    bool operator>(const PrimeIterator& other) const;
    bool operator<(const PrimeIterator& other) const;

    // Dereference operator
    int operator*() const;

    // Pre-increment operator
    PrimeIterator& operator++();

    // begin and end methods
    PrimeIterator& begin();
    PrimeIterator& end();

private:
    const MagicalContainer& container;
    int position;

};
