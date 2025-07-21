#include<bits/stdc++.h>
#define N 100100

using namespace std;

long long fi[N];

int solution(int n) {
    int answer = 0;
    
    fi[1] = fi[2] = 1;
    for(int i=3;i<=n;i++) fi[i] = (fi[i-2] + fi[i-1])%1234567;
    
    answer = fi[n];
    return answer;
}