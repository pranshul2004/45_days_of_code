#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
			std::cout << a - b << std::endl;
		else
			std::cout << 0 << std::endl;
	}
	return 0;
}
