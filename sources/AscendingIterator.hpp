#pragma once

class MagicalContainer;

class AscendingIterator
{
public:
    // Constructors and destructor
    AscendingIterator(const MagicalContainer &container);
    AscendingIterator(const AscendingIterator &other);
    ~AscendingIterator();

    // Assignment operator
    AscendingIterator &operator=(const AscendingIterator &other);
    
    // Comparison operators
    bool operator==(const AscendingIterator &other) const;
    bool operator!=(const AscendingIterator &other) const;
    bool operator>(const AscendingIterator &other) const;
    bool operator<(const AscendingIterator &other) const;

    // Dereference operator
    int operator*() const;

    // Pre-increment operator
    AscendingIterator &operator++();

    // begin and end methods
    AscendingIterator &begin();
    AscendingIterator &end();

private:
    const MagicalContainer &container;
    int position;
};
