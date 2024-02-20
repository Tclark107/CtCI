#include "include/List.h"

class ListTest
{
    public:

        void runTests();
        List ListTester;

    private:
        void appendOneElementTest();
        void prependOneElementTest();
        void appendFirstTest();
        void prependFirstTest();
        void appendPrependAppendTest();
        void prependAppendPrependTest();

        void clearTest();
        void clearEmptyListTest();
        void removeEndTest();
        void removeHead();
        void removeEnd();
        //void removeHeadAfterAppendsTest();
        //void removesEndAfterPrependsTest();
        
        void displayEmptyTest();
        void removeEndEmptyTest();
        void removeHeadEmptyTest();
        void removeElementTest();
        void removeElementThatDoesntExistTest();
        void removeElementEmptyTest();

        void peekTest();
        void peekEmptyTest();
};
