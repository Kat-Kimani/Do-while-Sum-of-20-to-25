#include<iostream>
using namespace std;

int main() {

	//allows you to execute code atleast once before testing it
	int num = 20;
	cout << "Sum of Numbers between 20 and 25" << endl;
	do {
		cout << num << endl;
		num++;

	} while (num <= 25);

	return 0;
}