#include<bits/stdc++.h>

using namespace std;

priority_queue<int> pqu;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    
    for(int i : score){
        pqu.push(-i);
        if(pqu.size()>k) pqu.pop();
        answer.push_back(-pqu.top());
    }
    
    return answer;
}