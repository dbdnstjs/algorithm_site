#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int i,j,n,m;
    
    n = arr1.size();
    m = arr1[0].size();
    
    for(i=0;i<n;i++) for(j=0;j<m;j++) arr1[i][j] += arr2[i][j];
    
    return arr1;
}