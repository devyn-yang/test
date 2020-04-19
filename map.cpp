#include <iostream>
#include <map>

using namespace std;

int main()
{
	using name_list = map<int , string> ;
	name_list nameList;
	nameList.insert(name_list::value_type(1,"one"));
	nameList.insert(name_list::value_type(2,"two"));
	nameList.insert(name_list::value_type(3,"three"));
	nameList.insert(name_list::value_type(4,"four"));
	nameList.insert(name_list::value_type(5,"five"));
	nameList.insert(name_list::value_type(6,"six"));

	for (auto a : nameList)
		cout << a.first << "  " << a.second << endl;
	name_list::iterator it = nameList.find(3);
	if (it != nameList.end())
		cout << "find result :" << it->first << "  " << it->second << endl;
	nameList.erase(4);	
	for (auto a = nameList.begin() ; a != nameList.end() ; a++)
		cout << a->first << "  " << a->second << endl;
	return 0;
}
