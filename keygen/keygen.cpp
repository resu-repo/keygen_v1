#include <iostream>

int main()
{
    int res = 0;
    printf("login\n");
    char log;
    std::cin >> log;
    int i = static_cast<int>(log);
    res =  i ^ 0x5678;
    int pas = res ^ 0x1234;
    std::cout<<"Your password"<<pas<<std::endl;
}

