#include<bits/stdc++.h>

using namespace std;

int n,dap,chk[100];
vector<vector<int>> dun;

void f1(int x,int y,int z){
    if(y-dun[x][0]<0) return;
    chk[x] = 1;
    for(int i=0;i<n;i++) if(chk[i]==0) f1(i,y-dun[x][1],z+1);
    if(dap<z) dap = z;
    chk[x] = 0;
    return;
}


int solution(int k, vector<vector<int>> dungeons) {
    int answer,i;
    
    dap = 0;
    dun = dungeons;
    n = dungeons.size();
    for(i=0;i<n;i++) f1(i,k,1);
    
    answer = dap;
    
    return answer;
}