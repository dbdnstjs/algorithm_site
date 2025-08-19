#include<bits/stdc++.h>

using namespace std;

map<char, int> mp;

int f1(string z){
    return stoi(z.substr(0,4))*28*12+stoi(z.substr(5,2))*28+stoi(z.substr(8,2))-1;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;    
    int num = f1(today);

    for(string i : terms) mp[i[0]] = stoi(i.substr(2))*28;
    int loc = 0;
    for(string i : privacies){
        loc++;
        if(num>=f1(i)+mp[i[11]]) answer.push_back(loc);
    }
    
    return answer;
}