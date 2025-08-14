#include<bits/stdc++.h>

using namespace std;

map<char,int> mp;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int i,cnt;
    
    for(string s : keymap) for(i=0;i<s.size();i++) if(mp[s[i]]==0||mp[s[i]]>i+1) mp[s[i]] = i+1;
    for(string s : targets){
        cnt = 0;
        for(i=0;i<s.size();i++){
            if(mp[s[i]]==0){
                cnt = -1;
                break;
            }
            cnt += mp[s[i]];
        }
        answer.push_back(cnt);
    }
    
    return answer;
}