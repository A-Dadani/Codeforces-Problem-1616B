/****************************************************
 *					Problem 1616B					*
 * https://codeforces.com/problemset/problem/1616/B *
 ****************************************************/

#include <iostream>
#include <string>

int main()
{
	unsigned int nCases;
	std::cin >> nCases;
	while (nCases--)
	{
		std::string inputStr;
		size_t mirrorPlace;

		{
			int trash;
			std::cin >> trash;
		}

		std::cin >> inputStr;
		if (inputStr[0] == inputStr[1]) mirrorPlace = 1;
		else
		{
			for (size_t i = 0; i < inputStr.size(); ++i)
			{
				if (inputStr[i] < inputStr[i + 1] || i == (inputStr.size() - 1))
				{
					mirrorPlace = i + 1;
					break;
				}
			}
		}
		for (size_t i = 0; i < mirrorPlace; ++i)
		{
			std::cout << inputStr[i];
		}
		for (long long int i = (mirrorPlace - 1); i >= 0; --i) //i is unsigned so we have to do this ugly workaround
		{
			std::cout << inputStr[i];
		}
		std::cout << std::endl;
	}
	return 0;
}