#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q1;

	for (int i=0;i<10;i++)
		q1.push(i);

	while( !q1.empty())
	{
		
		cout << q1.front() << endl;
		q1.pop();
	}
	return 0;
}
