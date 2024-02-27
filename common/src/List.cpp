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
    while (head) {
        if (head->next == NULL)
            std::cout << "[" << head->data << "] "
            << "[" << head << "]->"
            << "(nil)" << std::endl;
        else
            std::cout << "[" << head->data << "] "
            << "[" << head << "]->" << head->next
            << std::endl;
            head = head->next;
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

int List::peek()
{
    if(cursor != NULL)
    {
        return cursor->data;
    }
    return -1;
}

int List::removeEnd()
{
    std::cout << "removeEnd not implemented yet" <<  std::endl;
    return 0;
}

void List::removeElement(int position)
{
    if(!isEmpty())
    {
        Node* temp = head;
        Node* prev = head;

        for(int i = 0; i < position; i++)
        {
            if(i == 0 && position == 1)
            {
                head = head->next;
                free(temp);
            }
            else
            {
                if(i == position - 1 && temp)
                {
                    prev->next = temp->next;
                    free(temp);
                }
                else
                {
                    prev = temp;
                    if(prev == NULL)
                    {
                        std::cout << "position was greater than number of nodes in the list" << std::endl;
                        break;
                    }
                    temp = temp->next;
                }
            }
        }

    }
}

/* 
int List::removeCursor()
{
    if(!isEmpty())
    {
        if(cursor != NULL)
        {

        }
        else
        {
            std::cout << "How the heck did you get here, call this if you " <<
                "to delete what the cursor is on.  Your cursor" 
                << "is undefined. " << std::endl;
        }
    }
    return -1;
}
*/

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


void List::moveCursorFront()
{
    cursor = head;
}

bool List::moveCursorNext()
{
    if(cursor != NULL)
    {
        if(cursor->next != NULL)
        {
            cursor = cursor->next;
            return true;
        }
        return false;
    }
    return false;
}
