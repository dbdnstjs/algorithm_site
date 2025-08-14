#include<bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer,cnt;
    
    char c;
    answer = cnt = 0;
    for(char x : s){
        if(cnt==0) c = x;
        if(x==c){
            cnt++;
        }else{
            cnt--;
            if(cnt==0) answer++;
        }
    }
    if(cnt>0) answer++;
    return answer;
}