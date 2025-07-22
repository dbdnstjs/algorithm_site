#include<bits/stdc++.h>

using namespace std;

map<int,int> mp;
queue<int> qu;
bool chk[10000011];

bool cmp(int x,int y){
    return x>y;
}

int solution(int k, vector<int> tangerine) {
    int n,answer = 0;
    
    for(int i:tangerine){
        mp[i]++;
        if(chk[i]) continue;
        chk[i] = 1;
        qu.push(i);
    }
    
    vector<int> arr;
    while(!qu.empty()){
        arr.push_back(mp[qu.front()]);
        qu.pop();
    }
    
    sort(arr.begin(),arr.end(),cmp);
    
    for(int i:arr){
        k -= i;
        answer++;
        if(k<=0) break;
    }
    
    return answer;
}