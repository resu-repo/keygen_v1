#include <iostream>
#include<string>
using namespace std;

int main()
{
	std::string str;
	printf("login\n");
	std::cin >> str;
	int res = 0, i = 0;
	if ((str[i] < 'A') || (str[i] >= 'Z'))
	{
		printf("Incorrect name.Use only uppercase letters, please(A - Y)\n");
		return true;
	}
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			res += str[i];
		}
		res ^= 0x5678;
		res ^= 0x1234;
		std::cout << "Your password" << std::endl << res;
		return false;
	}
}
