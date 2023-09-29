#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        
        int bob=0,li=0;
        
        for(int i=1 ; ; i++){
            
            if(i%2==0){
                bob+=i;
                if(bob>B){
                    std::cout << "Limak" << std::endl;
                    break;
                }
            }
            
            else
            {
                li+=i;
                if(li>A){
                    std::cout << "Bob" << std::endl;
                    break;
                }
            }
        }
        
    }
}
