#include<bits/stdc++.h>

using namespace std;

long long solution(int a, int b) {
    long long i,answer = 0;
    if(a>b) swap(a,b);
    for(i=a;i<=b;i++) answer += i; 
    return answer;
}