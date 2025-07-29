#include<bits/stdc++.h>

using namespace std;

bool chk[3000011];

queue<int> qu;

int solution(int x, int y, int n) {
    int answer,i,num,m,loc;
    
    answer = 0;
    qu.push(x);
    while(!qu.empty()){
        m = qu.size();
        for(i=0;i<m;i++){
            num = qu.front();
            qu.pop();
            if(num>y) continue;
            if(num==y) return answer;
            loc = num+n;
            if(!chk[loc]){
                qu.push(loc);
                chk[loc] = 1;
            } 
            loc = num*2;
            if(!chk[loc]){
                qu.push(loc);
                chk[loc] = 1;
            } 
            loc = num*3;
            if(!chk[loc]){
                qu.push(loc);
                chk[loc] = 1;
            } 
        }
        answer++;
    }
    
    return -1;
}