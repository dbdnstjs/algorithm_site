#include<bits/stdc++.h>

using namespace std;

bool solution(string s) {
    
    if(s.size()==4||s.size()==6){
        for(char c : s){
            if(c>='0'&&c<='9'){
                continue;
            }else{
                 return 0;
            }
        } 
    }else{
        return 0;
    }
    
    return 1;
}