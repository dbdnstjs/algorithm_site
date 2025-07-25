#include<bits/stdc++.h>

using namespace std;

queue<int> qu;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    
    qu.push(0);
    for(int i:numbers){
        int n = qu.size();
        for(int j=0;j<n;j++){
            int x = qu.front();
            qu.pop();
            qu.push(x+i);
            qu.push(x-i);
        }
    }
    
    while(!qu.empty()){
        if(qu.front()==target) answer++;
        qu.pop();
    }
    
    return answer;
}