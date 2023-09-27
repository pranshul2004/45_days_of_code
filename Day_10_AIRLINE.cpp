#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if((a+b)<=d && c<=e)
        {
            std::cout << "YES" << std::endl;
        }
        else if((a+c)<=d && b<=e)
            std::cout << "YES" << std::endl;
        
        else if((b+c)<=d && a<=e)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
}
