#include <iostream>
#include<string>

int main()
{
    std::string str;
    printf("login\n");
    std::cin >> str;
    int res = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] < 'A')
        {
            printf("Incorrect name.Use only uppercase letters, please(A - Z)\n");
        }
        if (str[i] >= 'Z')
        
            str[i] -= 0x20;
            res += str[i];
        
    }
    res ^= 0x5678;
    res ^= 0x1234;
    std::cout<<"Your password"<<std::endl<<res;
}

