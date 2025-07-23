#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    int n,m,l,i,j,k,x;
    
    n = arr1.size();
    m = arr1[0].size();
    l = arr2[0].size();
    
    for(i=0;i<n;i++){
        vector<int> sum;
        for(j=0;j<l;j++){
            x = 0;
            for(k=0;k<m;k++){
                x += arr1[i][k]*arr2[k][j];
            }
            sum.push_back(x);
        }
        answer.push_back(sum);
    }
    
    return answer;
}