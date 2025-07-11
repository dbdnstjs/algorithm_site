#include<bits/stdc++.h>

using namespace std;

struct str{
    int x;
    string y,s;
};

bool operator<(str x,str y){
    if(x.x==y.x) return x.y>y.y;
    return x.x>y.x;
}

priority_queue<str> pq;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    for(int i=0;i<strings.size();i++) pq.push({strings[i][n],strings[i],strings[i]});
    
    while(!pq.empty()){
        answer.push_back(pq.top().s);
        pq.pop();
    }
    
    return answer;
}