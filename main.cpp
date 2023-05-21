#include <iostream>
using namespace std;

int main() {
	int i;
	int sum = 0;
	for (i = 1; i <= 1000; i++)
	{
		sum = sum + i;
	}
	cout << "summ numbers from 1 to 1000 = " << sum << endl;
	return 0;
}