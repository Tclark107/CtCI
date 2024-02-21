#include <iostream>
#include <unordered_map>

#include "../common/include/List.h"

void removeDupes(List list)
{
    std::cout << "hello world this is remove dupes" << std::endl;
    std::unordered_map<int, int> itemsInList;

    //getlength
    //or
    //movecursor to front
    //get element
    //if element is not in itemsInList
    //add to itemsInList
    //else
    //rmove element
    list.moveCursorFront();
    int element = list.peek();
    itemsInList.insert(std::make_pair(element,element));
    while(list.moveCursorNext())
    {
        element = list.peek();
        if(itemsInList.find(element) != itemsInList.end())
        {
            //not implemented yet
            //itemsInList.removeCursor(element)
            std::cout << "element repeated, delete " << list.peek() << std::endl;
        }
        else
        {
            std::cout << "new element " << list.peek() << " add to map" << std::endl;
            itemsInList.insert(std::make_pair(element,element));
        }
    }
    std::cout << "end" << std::endl;
}

void listDriver()
{
    // remove dupes
    List ListA;
    ListA.append(3);
    ListA.append(4);
    ListA.append(9);
    ListA.append(7);
    ListA.append(7);
    ListA.append(1);
    ListA.append(3);
    removeDupes(ListA);


}

int main()
{
    listDriver();
}
