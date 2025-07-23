#include<bits/stdc++.h>

using namespace std;

map<string,int> mp;
int cnt[100011];

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer,n,m,i,ch;
    
    n = want.size();
    m = discount.size();
    
    for(i=0;i<n;i++){
        mp[want[i]] = i+1;
        cnt[i+1] = number[i];
    }
    
    vector<int> sale;
    for(string s : discount) sale.push_back(mp[s]>0?mp[s]:0); 
    for(i=0;i<10;i++) cnt[sale[i]]--;
    ch = answer = 0;
    for(string s : want) if(cnt[mp[s]]>0) ch = 1;
    if(!ch) answer++;
    
    for(i=10;i<m;i++){
        cnt[sale[i]]--;
        cnt[sale[i-10]]++;
        ch = 1;
        for(string s : want) if(cnt[mp[s]]>0) ch = 0;                              
        if(ch) answer++;
    }
    
    return answer;
}