#include<bits/stdc++.h>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    int x = 'z'-'a'+1;
    n %= x;
    for(char c:s){
        if(c>='a'&&c<='z'){
            c -= ('a'-n);
            if(c+'a'>'z') answer += c+'a'-x;
            else answer += c+'a';
        }else if(c>='A'&&c<='Z'){
            c -= ('A'-n);
            if(c+'A'>'Z') answer += c+'A'-x;
            else answer += c+'A';
        }else{
            answer += ' ';
        }
    }
    
    return answer;
}