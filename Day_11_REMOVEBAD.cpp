#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
            
        for(auto i: arr)
            m[i]++;
        int Max=0;
        for(auto i: m)
        {
            Max=max(Max,i.second );
        }
        // std::cout << Max << std::endl;
        m.clear();
        std::cout << n-Max << std::endl;
        
    }
}
