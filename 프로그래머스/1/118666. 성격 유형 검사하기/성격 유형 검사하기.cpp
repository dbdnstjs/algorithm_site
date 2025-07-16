#include<bits/stdc++.h>

using namespace std;

map<char,int> mp;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int i,z;
    char x,y;
    
    for(i=0;i<choices.size();i++){
        x = survey[i][0];
        y = survey[i][1];
        z = choices[i]-4;
        if(z==0){
            if(x>y){
                mp[y]+=z;
            }else{
                mp[x]-=z;
            }
        }else if(z>0){
            mp[y]+=z;
        }else{
            mp[x]-=z;
        }
    }
    
    if(mp['R']>=mp['T']) answer += 'R';
    else answer += 'T';
    
    if(mp['C']>=mp['F']) answer += 'C';
    else answer += 'F';
    
    if(mp['J']>=mp['M']) answer += 'J';
    else answer += 'M';
    
    if(mp['A']>=mp['N']) answer += 'A';
    else answer += 'N';
    return answer;
}