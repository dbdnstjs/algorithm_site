#include<bits/stdc++.h>
#define N 1011

using namespace std;

bool chk[N][N];
int sum[N];
map<string,int> chg;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    int i,j,x,y,n,cnt;
    string s,s1,s2;
    
    n = id_list.size();
    for(i=1;i<=n;i++) chg[id_list[i-1]] = i;
    for(i=0;i<report.size();i++){
        s = s1 = s2 = "";
        for(char c : report[i]){
            if(c==' '){
                s1 += s;
                s = "";
            } 
            else s += c;
        }
        s2 += s;
        x = chg[s1];
        y = chg[s2];
        chk[x][y] = 1;
    }
    
    for(i=1;i<=n;i++){
        cnt = 0;
        for(j=1;j<=n;j++) if(chk[j][i]) cnt++;
        sum[i] = cnt;
    }
    
    for(i=1;i<=n;i++){
        cnt = 0;
        for(j=1;j<=n;j++) if(chk[i][j]&&sum[j]>=k) cnt++;
        answer.push_back(cnt);
    }
    
    return answer;
}