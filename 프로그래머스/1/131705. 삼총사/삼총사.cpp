#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> number) {
    int n,i,j,k,answer = 0;
    
    n = number.size();
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if((i!=j&&i!=k&&j!=k)&&(number[i]+number[j]+number[k])==0) answer++;
            }
        }
    }
    
    return answer;
}