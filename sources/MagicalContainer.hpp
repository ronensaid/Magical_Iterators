#ifndef MAGICALCONTAINER_HPP
#define MAGICALCONTAINER_HPP

#include <vector>

namespace ariel
{

    class MagicalContainer
    {
    public:
        // Constructor
        MagicalContainer();

        // Add and remove elements from the container, and get the size of the container
        void addElement(int element);
        void removeElement(int element);
        size_t size() const;

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
        
        class PrimeIterator
        {
        public:
            // Constructors and destructor
            PrimeIterator(const MagicalContainer &container);
            PrimeIterator(const PrimeIterator &other);
            ~PrimeIterator();

            // Assignment operator
            PrimeIterator &operator=(const PrimeIterator &other);

            // Comparison operators
            bool operator==(const PrimeIterator &other) const;
            bool operator!=(const PrimeIterator &other) const;
            bool operator>(const PrimeIterator &other) const;
            bool operator<(const PrimeIterator &other) const;

            // Dereference operator
            int operator*() const;

            // Pre-increment operator
            PrimeIterator &operator++();

            // begin and end methods
            PrimeIterator &begin();
            PrimeIterator &end();

        private:
            const MagicalContainer &container;
            int position;
        };
        
        class SideCrossIterator
        {
        public:
            // Constructors and destructor
            SideCrossIterator(const MagicalContainer &container);
            SideCrossIterator(const SideCrossIterator &other);
            ~SideCrossIterator();

            // Assignment operator
            SideCrossIterator &operator=(const SideCrossIterator &other);

            // Comparison operators
            bool operator==(const SideCrossIterator &other) const;
            bool operator!=(const SideCrossIterator &other) const;
            bool operator>(const SideCrossIterator &other) const;
            bool operator<(const SideCrossIterator &other) const;

            // Dereference operator
            int operator*() const;

            // Pre-increment operator
            SideCrossIterator &operator++();

            // begin and end methods
            SideCrossIterator &begin();
            SideCrossIterator &end();

        private:
            const MagicalContainer &container;
            int position;
        };

    private:
        // Use a dynamic array to store elements
        std::vector<int> elements;
    };

}
#endif // MAGICALCONTAINER_HPP
