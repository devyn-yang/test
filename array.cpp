#include <iostream>
#include <array>

int main()
{
	std::array<int ,10> ar;
	for (auto a = ar.begin() ; a != ar.end() ; a++)
		*a = 1;
	for( auto a : ar)
		std::cout << a << std::endl;
	return 0;
}
