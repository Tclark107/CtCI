#include <iostream>
#include <unordered_map>

#include "../common/include/List.h"

void removeDupes(List list)
{
    std::cout << "hello world this is remove dupes" << std::endl;
    list.display();
    
}

void listDriver()
{
    List ListA;
    ListA.append(3);
    ListA.append(4);
    ListA.append(9);
    ListA.append(7);
    ListA.append(7);
    ListA.append(1);
    ListA.display();

    removeDupes(ListA);


}

int main()
{
    listDriver();
}
