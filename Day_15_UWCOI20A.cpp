#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0 ; i<n ; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        
        std::cout << *max_element(v.begin() , v.end()) << std::endl;
    }
}
