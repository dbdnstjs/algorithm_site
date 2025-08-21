#include<bits/stdc++.h>

using namespace std;

map<string,int> mp_loc;
map<int,string> mp_name;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    int n,i,curr_loc,bef_loc;
    string bef_name;
    
    n = players.size();
    for(i=0;i<n;i++){
        mp_loc[players[i]] = i;
        mp_name[i] = players[i];
    }
    
    for(string s:callings){
        curr_loc = mp_loc[s];
        bef_loc = mp_loc[s]-1;
        bef_name = mp_name[bef_loc];
        
        mp_name[bef_loc] = s;
        mp_name[curr_loc] = bef_name;
        
        mp_loc[s] = bef_loc;
        mp_loc[bef_name] = curr_loc;
    }
    
    for(i=0;i<n;i++) answer.push_back(mp_name[i]);
    
    return answer;
}