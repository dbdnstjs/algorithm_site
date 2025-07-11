#include<bits/stdc++.h>

using namespace std;

map<string, int> num = {
    {"zero", 0}, {"one", 1}, {"two", 2},
    {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8},
    {"nine", 9}
};

int solution(string s) {
    int answer = 0;
    string st;
    
    for(char c : s){
        if(c>='0'&&c<='9'){
            answer = answer*10+(c-'0');
        }else{
            st += c;
            if(num.count(st)){
                answer = answer*10+num[st];
                st = "";
            }
        }
    }
    
    return answer;
}