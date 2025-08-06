#include<bits/stdc++.h>
#define N 1111

using namespace std;

int sum[10],num[N][N];

void f1(int x,int y,int siz){
    if(siz==1){
        sum[num[x][y]]++;
        return;
    }
    bool chk = 0;
    int cmp = num[x][y];
    for(int i=x;i<x+siz;i++){
        for(int j=y;j<y+siz;j++){
            if(cmp!=num[i][j]){
                chk = 1;
                break;
            }
        }
    }
    
    if(chk==0){
        sum[num[x][y]]++;
        return;
    }else{
        f1(x,y,siz/2);
        f1(x+siz/2,y,siz/2);
        f1(x,y+siz/2,siz/2);
        f1(x+siz/2,y+siz/2,siz/2);
    }
    
    return;
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    int n;
    
    n = arr.size();
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) num[i][j] = arr[i-1][j-1];
    f1(1,1,n);
    
    answer.push_back(sum[0]);
    answer.push_back(sum[1]);
    return answer;
}