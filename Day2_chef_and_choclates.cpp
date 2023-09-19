#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    std::cout << ((a*5)+(b*10))/c << std::endl;
	}
	return 0;
}
