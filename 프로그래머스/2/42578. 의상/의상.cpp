#include<bits/stdc++.h>

using namespace std;

map<string,int> mp;
queue<string> qu;

int solution(vector<vector<string>> clothes) {
    int i,j,len,answer;
    string s;
    
    len = 0;
    for(i=0;i<clothes.size();i++){
        s = clothes[i][1];
        if(mp[s]==0) qu.push(s);
        mp[s]++;
    }
    
    answer = 1;
    while(!qu.empty()){
        s = qu.front();
        qu.pop();
        answer *= mp[s]+1;
    }
    
    return answer-1;
}