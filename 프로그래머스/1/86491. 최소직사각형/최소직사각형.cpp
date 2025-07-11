#include<bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int n,i,j,x,y,answer = 0;
    
    n = sizes.size();
    x = y = 0;
    for(i=0;i<n;i++) if(sizes[i][0]<sizes[i][1]) swap(sizes[i][0],sizes[i][1]);
    for(i=0;i<n;i++){
        if(sizes[i][0]>x) x = sizes[i][0];
        if(sizes[i][1]>y) y = sizes[i][1];
    }
    
    answer = x*y;
    return answer;
}