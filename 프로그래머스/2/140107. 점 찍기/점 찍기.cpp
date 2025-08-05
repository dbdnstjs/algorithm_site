#include<bits/stdc++.h>

using namespace std;

long long solution(int k, int d) {
    long long i,loc,num,kk,dd,answer = 0;
    
    kk = k;
    dd = d;
    num = loc = 0;
    for(i=0;i*i<=dd*dd;i+=kk){
        loc = i;
        num++;
    } 
    
    for(i=0;i*i<=dd*dd;i+=kk){
        while(1){
            if(dd*dd-i*i>=loc*loc) break;
            loc-=k;
            num--;
        }
        answer += num;
    }
    
    return answer;
}