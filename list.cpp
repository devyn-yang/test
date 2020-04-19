#include <list>
#include <iostream>

int main()
{
	std::list<int> list1 = {2,3,4,5};
	std::list<int> list2(5);

	for(auto a :list1)
		std::cout << a << std::endl;
	std::cout << "second output" << std::endl;
	for (auto ite = list1.begin() ; ite != list1.end() ; ite ++)
		std::cout << *ite << std::endl;
	for(auto a = list2.begin() ; a != list2.end() ; a++)
		*a = 8;
	list2.push_back(10);
	list2.push_front(1);
	for (auto a : list2)
		std::cout << a << std::endl;

	return 0;
}
