#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        if(n == 1)
            std::cout << 1 << std::endl;
        else
        {
            int j=n;
            for( i=1; i<j ; i++){
                j--;
            }
            std::cout << i << std::endl;
        }
    }
}
