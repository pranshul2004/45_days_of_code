#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+c >=b)
            std::cout << a+c << std::endl;
        else
            std::cout << b << std::endl;
    }
}
