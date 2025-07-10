#include<bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    for(char c:s){
        cnt = (cnt+1)%2;
        if(c>='a'&&c<='z')
            c -= 'a';
        else if(c>='A'&&c<='Z') c -= 'A';
        else{
            cnt = 0;
            answer += c;
            continue;
        }
        
        if(cnt%2==0) answer += c+'a';
        else answer += c+'A';
    }
    
    return answer;
}