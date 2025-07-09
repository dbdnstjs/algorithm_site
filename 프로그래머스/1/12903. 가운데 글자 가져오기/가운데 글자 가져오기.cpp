#include<bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int sz;
    
    sz = s.size();
    if(sz%2==0) answer.push_back(s[sz/2-1]);
    answer.push_back(s[sz/2]);
    
    return answer;
}