#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=a/b;
	    int y=a/c;
	    if(a%b!=0 )
	        x+=1;
	        
	   if(a%c!=0)
	        y+=1;
	        
	    if(x-y >1){
	        std::cout << (x-y)-1 << std::endl;
	    }
	    else if(x==y){
	        std::cout << -1 << std::endl;
	    }
	    else
	    {
	        std::cout << 0 << std::endl;
	    }
	}
	return 0;
}
