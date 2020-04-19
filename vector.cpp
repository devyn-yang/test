#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numberList = {1,2,3,4,5,6,7,8,9};
	numberList.push_back(0);
	for(auto i : numberList) {
		std::cout << i << std::endl;
	}
	return 0;
}
