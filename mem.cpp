#include <iostream>
int main() {
	int* ptr =(int*) malloc(sizeof(int) *10);
	std::cout << ptr[10];
}

