#include "ListTest.h"

#include <iostream>
#include <sstream>
#include <string>
#include <cassert>

void ListTest::runTests()
{
    std::cout << "Beginning appendOneElementTest------------------------" 
        << std::endl << std::endl;

    appendOneElementTest();
    std::string result = ListTester.displayAsString();
    std::string answer = "1";
    std::cout << "State of list: " << result << std::endl;

    if(answer == result)
    {
        std::cout << "you did it!" << std::endl;
    }
    else 
    {
        std::cout << "you did not do it!" << std::endl;
    }
    removeHead();

    std::cout << "End of appendOneElementTest---------------------------" 
        << std::endl << std::endl;

    std::cout << "Beginning prependOneElementTest------------------------" 
        << std::endl << std::endl;

    prependOneElementTest();
    removeHead();

    std::cout << "End of prependOneElementTest---------------------------" 
        << std::endl << std::endl;

    std::cout << "Beginning AppendFirst Test------------------------" 
        << std::endl << std::endl;

    appendFirstTest();
    clearTest();

    std::cout << "End of AppendFirst Test------------------------" 
        << std::endl << std::endl;

    std::cout << "Beginning prepend First Test------------------------" 
        << std::endl << std::endl;

    prependFirstTest();
    clearTest();

    std::cout << "End of prepend First Test------------------------" 
        << std::endl << std::endl;

    std::cout << "Beginning appendprependappend Test------------------------" 
        << std::endl << std::endl;

    appendPrependAppendTest();
    removeHead();
    clearTest();

    std::cout << "End of appendprependappend Test------------------------" 
        << std::endl << std::endl;

    std::cout << "Beginning prependappendprepend Test------------------------" 
        << std::endl << std::endl;

    prependAppendPrependTest();
    removeEnd();
    clearTest();

    std::cout << "End of prependappendprepend First Test------------------------" 
        << std::endl << std::endl;

    std::cout << "Beginning peek and removeElem Test------------------------" 
        << std::endl << std::endl;

    appendPrependAppendTest();
    peekTest();
    removeElementTest();
    clearTest();

    std::cout << "End of peek and removeElem Test------------------------" 
        << std::endl << std::endl;

    std::cout << "Begin peek and removing on Empty Test------------------------" 
        << std::endl << std::endl;

    displayEmptyTest();
    peekEmptyTest();
    clearEmptyListTest();
    removeEndEmptyTest();
    removeHeadEmptyTest();
    removeElementEmptyTest();

    std::cout << "End of peek and removing on Empty Test------------------------" 
        << std::endl << std::endl;
}

void ListTest::appendOneElementTest()
{
    //ListTester.append(1);
    //ListTester.display();
    List list1;
    list1.append(1);
}

void ListTest::prependOneElementTest()
{
    ListTester.prepend(1);
    ListTester.display();
}

void ListTest::prependFirstTest()
{
    ListTester.prepend(1);
    ListTester.append(3);
    ListTester.display();
}

void ListTest::appendFirstTest()
{
    ListTester.append(1);
    ListTester.prepend(3);
    ListTester.display();
}

void ListTest::appendPrependAppendTest()
{
    ListTester.append(1);
    ListTester.prepend(3);
    ListTester.append(0);
    ListTester.display();
}

void ListTest::prependAppendPrependTest()
{
    ListTester.prepend(4);
    ListTester.append(5);
    ListTester.prepend(7);
    ListTester.display();
}

void ListTest::clearTest()
{
    std::cout << "Clearing the List------------------------" 
        << std::endl << std::endl;
    ListTester.clear();
    ListTester.display();
}

void ListTest::clearEmptyListTest()
{
    std::cout << "Clearing an empty List------------------------" 
        << std::endl << std::endl;
    ListTester.clear();
    ListTester.display();
    ListTester.clear();
    ListTester.display();
}

//void ListTest::removeEndAfterPrepends()
//
//   std::cout << "Removing the Last Element------------------------" 
//       << std::endl << std::endl;
//   ListTester.prepend(4);
//   ListTester.prepend(8);
//   ListTester.prepend(3);
//   ListTester.prepend(4);
//   ListTester.display();
//   ListTester.removeEnd();
//   ListTester.display();
//

void ListTest::removeEnd()
{
    std::cout << "Removing end"
        << std::endl << std::endl;
    ListTester.removeEnd();
    ListTester.display();
}

void ListTest::displayEmptyTest()
{
    ListTester.clear();
    ListTester.display();
}
void ListTest::removeEndEmptyTest()
{
    std::cout << "Removing the End on an empty List"
        << std::endl << std::endl;
    ListTester.clear();
    ListTester.removeEnd();
    ListTester.display();
}

void ListTest::removeHead()
{
    std::cout << "Removing head"
        << std::endl << std::endl;
    ListTester.removeHead();
    ListTester.display();
}

//oid ListTest::removeHeadAfterAppendsTest()
//
//   std::cout << "Remove Head Test------------------------" 
//       << std::endl << std::endl;
//   ListTester.append(4);
//   ListTester.append(8);
//   ListTester.append(3);
//   ListTester.append(4);
//   ListTester.display();
//   ListTester.removeHead();
//   ListTester.display();
//

void ListTest::removeHeadEmptyTest()
{
    std::cout << "Removing the Head on an empty List" 
        << std::endl << std::endl;
    ListTester.clear();
    ListTester.removeHead();
    ListTester.display();
}

void ListTest::removeElementTest()
{
    std::cout << "Removing an Element Test" 
        << std::endl << std::endl;
    ListTester.append(4);
    ListTester.append(8);
    ListTester.append(3);
    ListTester.append(4);
    ListTester.display();
    ListTester.removeElement(2);
    ListTester.display();
}

void ListTest::removeElementThatDoesntExistTest()
{
    ListTester.append(4);
    ListTester.append(8);
    ListTester.append(3);
    ListTester.append(4);
    ListTester.display();
    ListTester.removeElement(5);
    ListTester.display();
}

void ListTest::removeElementEmptyTest()
{
    ListTester.clear();
    ListTester.removeElement(2);
    ListTester.display();
}

void ListTest::peekTest()
{
    ListTester.append(4);
    ListTester.append(8);
    ListTester.append(3);
    ListTester.append(4);
    ListTester.display();
    ListTester.peek();
}

void ListTest::peekEmptyTest()
{
    ListTester.clear();
    ListTester.peek();
    ListTester.display();
}
