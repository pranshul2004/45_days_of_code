#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d1,d2,d3,d4,d5,p;
        cin>>d1>>d2>>d3>>d4>>d5>>p;
        
        int ans;
        ans=p*(d1+d2+d3+d4+d5);
        if(ans<=120)
            std::cout << "No" << std::endl;
        else
            std::cout << "Yes" << std::endl;
    }
}
