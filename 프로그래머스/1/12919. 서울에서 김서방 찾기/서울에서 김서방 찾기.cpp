#include<bits/stdc++.h>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";    
    
    for(int i=0;i<seoul.size();i++){
        if(seoul[i].size()!=3) continue;
        if(seoul[i][0]=='K'&&seoul[i][1]=='i'&&seoul[i][2]=='m'){
            answer += to_string(i)+"에 있다";
            break;
        }
    }
    
    return answer;
}