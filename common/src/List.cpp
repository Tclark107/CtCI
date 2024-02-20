#include "../include/List.h"


List::List()
{
}

void List::prepend(int new_data)
{
    Node* new_node = new Node(new_data);

    if(isEmpty())
    {
        end = new_node;
        head = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

void List::append(int new_data)
{
    Node* new_node = new Node(new_data);

    if(isEmpty())
    {
        end = new_node;
        head = new_node;
        return;
    }

    end->next = new_node;
    end = new_node;
}

int List::removeHead()
{
    if(!isEmpty())
    {
        int topData = head->data;

        Node* temp = head;
        head = head->next;
        delete temp;
        
        return topData;
    }
    return -1;
}

void List::display()
{
    std::cout << "Displaying the state of the List:" << std::endl;
    cursor = head;
    while(cursor != nullptr)
    {
        std::cout << cursor->data << " ";
        cursor = cursor->next;
    }
    std::cout << std::endl << std::endl;
}

std::string List::displayAsString()
{
    std::cout << "Saving the state of the List to a string" << std::endl;
    std::stringstream output;

    cursor = head;
    while(cursor != nullptr)
    {
        output << cursor->data << " ";
        cursor = cursor->next;
    }

    std::string s = output.str();

    return s;
}

bool List::isEmpty()
{
    if(head == NULL || end == NULL)
    {
        return true;
    }
    return false;
}

void List::peek()
{
    std::cout << "peek not implemented yet" <<  std::endl;
}

int List::removeEnd()
{
    std::cout << "removeEnd not implemented yet" <<  std::endl;
    return 0;
}

int List::removeElement(int butt)
{
    std::cout << "removeElement not implemented yet" <<  std::endl;
    return 0;
}

void List::clear()
{
    if(!isEmpty())
    {
        Node* temp;
        while(head->next != NULL)
        {
            temp = head;
            head = head->next;
            delete temp;
        }

        temp = head;
        delete temp;
        head = nullptr;
        end = nullptr;
        cursor = nullptr;
    }
}
