#include <string>
#include <sstream>
#include <iostream>

class Node 
{
    public:
        int data;
        Node *next;
        Node(int new_data)
        {
            data = new_data;
            Node *next = nullptr;
        }
};

class List
{
    public:
        Node* head = nullptr;
        Node* end = nullptr;
        Node* cursor = nullptr;

        List();

        void prepend(int new_data);
        void append(int new_data);
        int peek();

        // returns -1 if the list is empty
        int removeHead();         
        int removeEnd();
        void removeElement(int index);
        //int removeCursor(); needs to be double linked
        void clear();

        void moveCursorFront();
        bool moveCursorNext();

        void display();
        std::string displayAsString();
 
    private:
        bool isEmpty();
};
