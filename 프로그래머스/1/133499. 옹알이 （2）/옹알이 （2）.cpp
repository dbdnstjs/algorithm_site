#include<bits/stdc++.h>

using namespace std;

map<string, int> mp;

int solution(vector<string> babbling) {
    int answer = 0,ch,chk;
    string c;
    
    mp["aya"] = 1;
    mp["ye"] = 2;
    mp["woo"] = 3;
    mp["ma"] = 4;
    
    for(string s : babbling){
        chk = 0;
        c = "";
        for(int i=0;i<s.size();i++){
            ch = 0;
            c += s[i];
            if(mp[c]>0){
                if(mp[c]==chk) break;        
                chk = mp[c];
                c = "";
                ch = 1;
            }
        }
        if(ch) answer++;
    }
    
    return answer;
}