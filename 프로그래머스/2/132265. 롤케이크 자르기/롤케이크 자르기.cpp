#include<bits/stdc++.h>

using namespace std;

int chk[10111],ch[10111];

int solution(vector<int> topping) {
    int x,n,answer,num,i,cnt;
    
    num = cnt = answer = 0;
    n = topping.size();
    for(i=0;i<n;i++){
        x = topping[i];
        if(chk[x]==0) num++;
        chk[x]++;
    }
    
    for(i=0;i<n;i++){
        x = topping[i];
        if(ch[x]==0) cnt++;
        ch[x]++;
        chk[x]--;
        if(chk[x]==0) num--;
        if(cnt==num) answer++;
    }
    
    return answer;
}