#include<bits/stdc++.h>
#define N 2011
#define M 1234567

using namespace std;

long long arr[N];

long long solution(int n) {    
    arr[0] = 1;
    arr[1] = 1;
    for(long long i=2;i<=n;i++) arr[i] = (arr[i-2]+arr[i-1])%M;
    
    return arr[n];
}