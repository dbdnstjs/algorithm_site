#include<bits/stdc++.h>
#define N 111

using namespace std;

vector<int> node[N];
int chk[N],cnt;

void chk_wires(int loc,int x,int y,int num)
{
    cnt++;
    chk[loc] = num;
    for(int i : node[loc]){
        if(chk[i]==num) continue;
        if((loc==x&&i==y)||(loc==y&&i==x)) continue;
        chk_wires(i,x,y,num);
    }
}

int solution(int n, vector<vector<int>> wires) {
    int x,y,m,i,answer,sum;
    
    m = wires.size();
    for(i=0;i<m;i++){
        x = wires[i][0];
        y = wires[i][1];
        node[x].push_back(y);
        node[y].push_back(x);
    }
    
    answer = n;
    for(i=0;i<m;i++){
        x = wires[i][0];
        y = wires[i][1];
        cnt = 0;
        chk_wires(x,x,y,i+1);
        sum = cnt;
        cnt = 0;
        chk_wires(y,x,y,i+1);
        
        if(sum+cnt!=n) continue;
        if(cnt>sum) swap(cnt,sum);
        if(answer>sum-cnt) answer = sum-cnt;
    }
    
    return answer;
}