#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y+z==0)||(x+y-z)==0||(x-y+z)==0||(x-y-z)==0||(z-x-y)==0||(y+z-x)==0||(y-x-z)==0)
        {    std::cout << "yes" << std::endl; }
        else
            std::cout << "no" << std::endl;
    }
}
