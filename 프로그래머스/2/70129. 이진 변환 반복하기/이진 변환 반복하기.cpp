#include<bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string num;
    int x,y,i,n;
    
    answer.push_back(0);
    answer.push_back(0);
    while(1){
        num = s;
        x = y = 0;
        n = num.size();
        if(n==1) break;
        answer[0]++;
        for(i=0;i<n;i++){
            if(num[i]=='1') x++;
            else y++;
        }
        answer[1] += y;
        s = "";
        while(x){
            if(x%2==1) s += "1";
            else s += "0";
            x /= 2;
        }
    }
    
    return answer;
}