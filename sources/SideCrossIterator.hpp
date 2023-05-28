#pragma once

class MagicalContainer;

class SideCrossIterator {
public:
    // Constructors and destructor
    SideCrossIterator(const MagicalContainer& container);
    SideCrossIterator(const SideCrossIterator& other);
    ~SideCrossIterator();

    // Assignment operator
    SideCrossIterator& operator=(const SideCrossIterator& other);

    // Comparison operators
    bool operator==(const SideCrossIterator& other) const;
    bool operator!=(const SideCrossIterator& other) const;
    bool operator>(const SideCrossIterator& other) const;
    bool operator<(const SideCrossIterator& other) const;

    // Dereference operator
    int operator*() const;

    // Pre-increment operator
    SideCrossIterator& operator++();

    // begin and end methods
    SideCrossIterator& begin();
    SideCrossIterator& end();

private:
    const MagicalContainer& container;
    int position;

};
