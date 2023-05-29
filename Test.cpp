#include "sources/MagicalContainer.hpp"
#include "doctest.h"
using namespace ariel;
TEST_CASE("Testing MagicalContainer functionality")
{

    SUBCASE("Test addElement() and size()")
    {
        MagicalContainer mc;
        mc.addElement(10);
        CHECK(mc.size() == 1); // Size should be 1 after adding one element
        mc.addElement(20);
        CHECK(mc.size() == 2); // Size should be 2 after adding another element
    }

    SUBCASE("Test removeElement()")
    {
        MagicalContainer mc;
        mc.addElement(10);
        mc.addElement(20);
        mc.removeElement(10);
        CHECK(mc.size() == 1); // Size should be 1 after removing one element
    }
}

TEST_CASE("Testing AscendingIterator")
{
    MagicalContainer container;
    container.addElement(17);
    container.addElement(2);
    container.addElement(25);
    container.addElement(9);
    container.addElement(3);

    MagicalContainer::AscendingIterator ascIter(container);

    SUBCASE("Testing iteration")
    {
        std::vector<int> expected_values = {2, 3, 9, 17, 25};
        std::size_t count = 0;
        for (auto it = ascIter.begin(); it != ascIter.end(); ++it, ++count)
        {
            CHECK(*it == expected_values[count]);
        }
        CHECK(count == expected_values.size());
    }

    SUBCASE("Testing increment operator")
    {
        auto it = ascIter.begin();
        ++it;
        CHECK(*it == 3);
    }

    SUBCASE("Testing dereference operator")
    {
        auto it = ascIter.begin();
        CHECK(*it == 2);
    }

    SUBCASE("Testing equality and inequality operators")
    {
        auto it1 = ascIter.begin();
        auto it2 = ascIter.begin();
        CHECK(it1 == it2);
        ++it1;
        CHECK(it1 != it2);
    }

    SUBCASE("Test less than and greater than operators")
    {

        auto it1 = ascIter.begin();

        auto it2 = ascIter.begin();
        ++it2; // Move it2 to the next element

        CHECK((it1 < it2) == true);
        CHECK((it1 > it2) == false);
        CHECK((it2 < it1) == false);
        CHECK((it2 > it1) == true);
    }

    SUBCASE("Test comparison operators")
    {

        auto it1 = ascIter.begin();
        auto it2 = ascIter.begin();

        CHECK((it1 == it2) == true);
        CHECK((it1 != it2) == false);
    }

    SUBCASE("Empty Container")
    {
        MagicalContainer emptyContainer;
        MagicalContainer::AscendingIterator ascIter(emptyContainer);
        CHECK(ascIter.begin() == ascIter.end());
    }

    SUBCASE("Single Element Container")
    {
        MagicalContainer singleElementContainer;
        singleElementContainer.addElement(5);
        MagicalContainer::AscendingIterator ascIter(singleElementContainer);
        CHECK(ascIter.begin() != ascIter.end());
        ++ascIter;
        CHECK(ascIter.begin() == ascIter.end());
    }

    SUBCASE("Adding Elements After Iterator Construction")
    {
        MagicalContainer container;
        container.addElement(1);
        MagicalContainer::AscendingIterator ascIter(container);
        container.addElement(2);
        CHECK(*ascIter == 1);
        ++ascIter;
        CHECK(*ascIter == 2);
    }

    SUBCASE("Removing Elements After Iterator Construction")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::AscendingIterator ascIter(container);
        container.removeElement(1);
        CHECK(*ascIter == 2);
    }

    SUBCASE("Iterator Comparison Across Different Containers")
    {
        MagicalContainer container1;
        container1.addElement(1);
        MagicalContainer::AscendingIterator ascIter1(container1);

        MagicalContainer container2;
        container2.addElement(2);
        MagicalContainer::AscendingIterator ascIter2(container2);

        CHECK(ascIter1 != ascIter2);
    }
}

TEST_CASE("Testing PrimeIterator")
{
    MagicalContainer container;
    container.addElement(3);
    container.addElement(2);
    container.addElement(9);
    container.addElement(7);
    container.addElement(5);

    MagicalContainer::PrimeIterator prIter(container);

    SUBCASE("Testing iteration")
    {
        std::vector<int> expected_values = {2, 3, 5, 7};
        std::size_t count = 0;
        for (auto it = prIter.begin(); it != prIter.end(); ++it, ++count)
        {
            CHECK(*it == expected_values[count]);
        }
        CHECK(count == expected_values.size());
    }

    SUBCASE("Testing increment operator")
    {
        auto it = prIter.begin();
        ++it;
        CHECK(*it == 3);
    }

    SUBCASE("Testing dereference operator")
    {
        auto it = prIter.begin();
        CHECK(*it == 2);
    }

    SUBCASE("Testing equality and inequality operators")
    {
        auto it1 = prIter.begin();
        auto it2 = prIter.begin();
        CHECK(it1 == it2);
        ++it1;
        CHECK(it1 != it2);
    }

    SUBCASE("Test less than and greater than operators")
    {

        auto it1 = prIter.begin();

        auto it2 = prIter.begin();
        ++it2; // Move it2 to the next element

        CHECK((it1 < it2) == true);
        CHECK((it1 > it2) == false);
        CHECK((it2 < it1) == false);
        CHECK((it2 > it1) == true);
    }

    SUBCASE("Test comparison operators")
    {

        auto it1 = prIter.begin();
        auto it2 = prIter.begin();

        CHECK((it1 == it2) == true);
        CHECK((it1 != it2) == false);
    }
    SUBCASE("Empty Container")
    {
        MagicalContainer emptyContainer;
        MagicalContainer::PrimeIterator prIter(emptyContainer);
        CHECK(prIter.begin() == prIter.end());
    }

    SUBCASE("Single Element Container (not prime)")
    {
        MagicalContainer singleElementContainer;
        singleElementContainer.addElement(4); // not a prime number
        MagicalContainer::PrimeIterator prIter(singleElementContainer);
        CHECK(prIter.begin() == prIter.end()); // should have no elements to iterate over
    }

    SUBCASE("Single Element Container (prime)")
    {
        MagicalContainer singleElementContainer;
        singleElementContainer.addElement(5); // a prime number
        MagicalContainer::PrimeIterator prIter(singleElementContainer);
        CHECK(prIter.begin() != prIter.end()); // should have one element to iterate over
        ++prIter;
        CHECK(prIter.begin() == prIter.end());
    }

    SUBCASE("Adding Elements After Iterator Construction")
    {
        MagicalContainer container;
        container.addElement(2); // a prime number
        MagicalContainer::PrimeIterator prIter(container);
        container.addElement(3); // another prime number
        CHECK(*prIter == 2);
        ++prIter;
        CHECK(*prIter == 3); // Check that prIter is aware of the newly added element
    }

    SUBCASE("Removing Elements After Iterator Construction")
    {
        MagicalContainer container;
        container.addElement(2);
        container.addElement(3);
        container.addElement(5);
        MagicalContainer::PrimeIterator prIter(container);
        container.removeElement(2);
        CHECK(*prIter == 3); // Check that prIter skips the removed element
        ++prIter;
        CHECK(*prIter == 5); // And moves to the correct next element
    }

    SUBCASE("Iterator Comparison Across Different Containers")
    {
        MagicalContainer container1;
        container1.addElement(2);
        MagicalContainer::PrimeIterator prIter1(container1);

        MagicalContainer container2;
        container2.addElement(3);
        MagicalContainer::PrimeIterator prIter2(container2);

        CHECK(prIter1 != prIter2);
    }
}

TEST_CASE("Testing SideCrossIterator")
{
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);

    MagicalContainer::SideCrossIterator scIter(container);

    SUBCASE("Testing iteration")
    {
        std::vector<int> expected_values = {1, 5, 2, 4, 3}; // the expected cross order
        std::size_t count = 0;
        for (auto it = scIter.begin(); it != scIter.end(); ++it, ++count)
        {
            CHECK(*it == expected_values[count]);
        }
        CHECK(count == expected_values.size());
    }

    SUBCASE("Testing increment operator")
    {
        auto it = scIter.begin();
        ++it;
        CHECK(*it == 5); // Next element in cross order
    }

    SUBCASE("Testing dereference operator")
    {
        auto it = scIter.begin();
        CHECK(*it == 1); // first element
    }

    SUBCASE("Testing equality and inequality operators")
    {
        auto it1 = scIter.begin();
        auto it2 = scIter.begin();
        CHECK(it1 == it2);
        ++it1;
        CHECK(it1 != it2);
    }

    SUBCASE("Test less than and greater than operators")
    {
        auto it1 = scIter.begin();
        auto it2 = scIter.begin();
        ++it2; // Move it2 to the next element
        CHECK((it1 < it2) == true);
        CHECK((it1 > it2) == false);
        CHECK((it2 < it1) == false);
        CHECK((it2 > it1) == true);
    }

    SUBCASE("Test comparison operators")
    {
        auto it1 = scIter.begin();
        auto it2 = scIter.begin();
        CHECK((it1 == it2) == true);
        CHECK((it1 != it2) == false);
    }

    SUBCASE("Empty Container")
    {
        MagicalContainer emptyContainer;
        MagicalContainer::SideCrossIterator scIter(emptyContainer);
        CHECK(scIter.begin() == scIter.end());
    }

    SUBCASE("Single Element Container")
    {
        MagicalContainer singleElementContainer;
        singleElementContainer.addElement(7);
        MagicalContainer::SideCrossIterator scIter(singleElementContainer);
        CHECK(scIter.begin() != scIter.end()); // should have one element to iterate over
        ++scIter;
        CHECK(scIter.begin() == scIter.end());
    }

    SUBCASE("Adding Elements After Iterator Construction")
    {
        MagicalContainer container;
        container.addElement(1);
        MagicalContainer::SideCrossIterator scIter(container);
        container.addElement(2);
        CHECK(*scIter == 1);
        ++scIter;
        CHECK(*scIter == 2); // Check that scIter is aware of the newly added element
    }

    SUBCASE("Removing Elements After Iterator Construction")
    {
        MagicalContainer container;
        container.addElement(1);
        container.addElement(2);
        MagicalContainer::SideCrossIterator scIter(container);
        container.removeElement(1);
        CHECK(*scIter == 2);
    }

    SUBCASE("Iterator Comparison Across Different Containers")
    {
        MagicalContainer container1;
        container1.addElement(1);
        MagicalContainer::SideCrossIterator scIter1(container1);

        MagicalContainer container2;
        container2.addElement(2);
        MagicalContainer::SideCrossIterator scIter2(container2);

        CHECK(scIter1 != scIter2);
    }
}