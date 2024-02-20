#include <iostream>
#include <string>

// using str
bool isUnique(std::string *str)
{
    std::cout << *str << std::endl;
    std::string values; 
    
    for(auto i = str->cbegin(); i != str->cend(); i++)
    {
        // make faster with hashmap
        for(auto i2 = values.begin(); i2 != str->cend(); i2++)
        {
            std::cout << "letter in streing = " << *i << std::endl;
            std::cout << "letter in values = " << *i2 << std::endl;
            if(*i != *i2)
            {

                values.push_back(*i2);
                std::cout << values.pop_back() << std::endl;
                continue;
            }
            std::cout << "hey2" << std::endl;
            return false;
        }


    }
    std::cout << values << std::endl;

    return true;
}

// without using str
// also don't use a hashtable
//bool isUnique(char*)
//{
 //   std::cout << str << std::endl;

//}

//
int main()
{
    std::string str = "hwl";
    std::cout << isUnique(&str) << std::endl;
}
