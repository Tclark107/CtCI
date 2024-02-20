#include <iostream>
#include <string>
#include <map>

#include <ctime>
#include <unistd.h>

std::string generateRandom(const int len)
{
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i)
    {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return tmp_s;
}


bool isUnique(std::string str)
{
    std::map<char, std::string> uniqueMap;

    int stringLength = str.length();

    for(int i = 0; i < stringLength; i++)
    {
        std::cout << "stri =  " << str[i] << std::endl;
        if(uniqueMap.find(str[i]) != uniqueMap.end())
        {
            std::cout << "she aint unique" << " " << str[i] << std::endl;
            return false;
        }
        uniqueMap[str[i]] = str[i];
    }
    
    std::map<char, std::string>::iterator itr;
    for(itr = uniqueMap.begin(); itr != uniqueMap.end(); ++itr)
    {
        std::cout << itr->first << " " << itr->second << " " << std::endl;
    }
    std::cout << "she unique" << std::endl;
    return true;
}

 int main()
 {
    std::string str = "hello";
    for(int i = 0; i <= 100; i++)
    {
        str = generateRandom(4);
        std::cout << "str = "<< str <<  std::endl;
        isUnique(str);
    }
}
