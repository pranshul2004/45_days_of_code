#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,P,area,Max=0;;
        cin>>N>>P;
        while(N--){
            int h,l,p;
            cin>>h>>l>>p;
            
            if(p<=P)
            {
                area = l * h;
                Max = max(Max,area);
            }
        }
        if(Max == 0)
            std::cout << "no tablet" << std::endl;
        else
            std::cout << Max << std::endl;
    }
}
