#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int i,n,answer = 0;
    
    n = a.size();
    if(n>b.size()) n = b.size();
    for(i=0;i<n;i++) answer += a[i]*b[i];
    
    return answer;
}