#include<bits/stdc++.h>

using namespace std;

bool chk_skip[100];
int s_loc[1000];
vector<char> my_arr;

string solution(string s, string skip, int index) {
    string answer = "";
    
    int i,n,m,num,x;
    
    n = skip.size();
    for(i=0;i<n;i++) chk_skip[skip[i]-'a'] = 1;
    
    num = 0;
    for(i='a';i<='z';i++){
        if(chk_skip[i-'a']==1) continue;
        s_loc[i] = ++num;
        my_arr.push_back(i);
    }
    
    n = s.size();
    m = my_arr.size();
    
    for(i=0;i<n;i++){
        x = s_loc[s[i]]+index-1;
        answer += my_arr[x%m];
    }
    
    return answer;
}
