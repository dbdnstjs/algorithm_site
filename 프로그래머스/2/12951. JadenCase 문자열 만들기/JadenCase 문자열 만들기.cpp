#include<bits/stdc++.h>

using namespace std;

bool is_lower(char c)
{
    if(c>='a'&&c<='z') return 1;
    return 0;
}

bool is_upper(char c)
{
    if(c>='A'&&c<='Z') return 1;
    return 0;
}

bool is_number(char c)
{
    if(c>='0'&&c<='9') return 1;
    return 0;
}

string solution(string s) {
    string answer = "";
    int n,chk,y,i;
    char x;
    
    n = s.size();
    chk = 1;
    for(i=0;i<n;i++){
        x = s[i];
        if(is_lower(x)){
            if(chk==1) x = x-'a'+'A';
            answer += x;
            chk = 0;
        }else if(is_upper(x)){
            if(chk==0) x = x-'A'+'a';
            answer += x;
            chk = 0;
        }else if(is_number(x)){
            answer += x;
            chk = 0;
        }else{
            chk = 1;
            answer += " ";
        }
    }
    
    return answer;
}
