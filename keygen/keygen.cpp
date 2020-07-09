#include <iostream>
#include<string>
using namespace std;

int main()
{
	bool a = true;
	while ( a )
	{
		printf("login\n");
		std::string str;
		std::cin >> str;
		int res = 0, i = 0;
		if ((str[i] < 'A') || (str[i] >= 'Z'))
		{
			printf("Incorrect name.Use only uppercase letters, please(A - Y)\n");
			a = true;
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
			a = false;
		}
	}
}
