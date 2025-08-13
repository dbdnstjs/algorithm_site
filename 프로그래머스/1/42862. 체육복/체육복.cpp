#include<bits/stdc++.h>

using namespace std;

int chk[100];

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    for(int i : lost) chk[i] = -1;
    for(int i : reserve) chk[i] += 1;
    
    for(int i=1;i<=n;i++){
        if(chk[i]==-1){
            if(i>1&&chk[i-1]==1) chk[i] = chk[i-1] = 0;
            else if(i<n&&chk[i+1]==1) chk[i] = chk[i+1] = 0;
            else continue;
        }
    }
    
    for(int i=1;i<=n;i++) if(chk[i]>=0) answer++;
    
    return answer;
}