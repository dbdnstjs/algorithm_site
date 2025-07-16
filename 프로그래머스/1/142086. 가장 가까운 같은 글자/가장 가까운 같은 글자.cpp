#include<bits/stdc++.h>

using namespace std;

map<char,int> mp;

vector<int> solution(string s) {
    vector<int> answer;
    int len = 0;
    
    for(char c:s){
        len++;
        if(mp[c]==NULL) answer.push_back(-1);
        else answer.push_back(len-mp[c]);
        mp[c] = len;
    }
    
    return answer;
}