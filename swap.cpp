#include <iostream>

void swap(int *first, int *second)
{
    std::cout << "first = " << first << std::endl;
    std::cout << "*first = " << *first << std::endl;
    std::cout << "&first = " << &first << std::endl;
    std::cout << "second= " << second << std::endl;
    std::cout << "*second= " << *second << std::endl;
    std::cout << "&second = " <<&second << std::endl;
   int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int first = 1;
    int second = 2;

    std::cout << "first = " << first << std::endl;
    std::cout << "second = " << second << std::endl;
    std::cout << "&first = " << &first << std::endl;
    std::cout << "&second = " <<&second << std::endl;
   
    swap(&first,&second);

    std::cout << "first = " << first << std::endl;
    std::cout << "second = " << second << std::endl;

    
}
