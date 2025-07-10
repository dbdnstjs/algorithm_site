#include<bits/stdc++.h>

using namespace std;

int arr[1000];

int solution(int n) {
    int cnt,m,answer,i;
    
    cnt = 0;
    m = 1;
    while(1){
        if(n<m) break;
        cnt++;
        m *= 3;
    }
    
    for(i=0;i<cnt;i++){
        m /= 3;
        if(n>=m*2){
            arr[i] = 2;
            n -= m*2;
        }else if(n>=m){
            arr[i] = 1;
            n -= m;
        } 
    }
    
    m = 1;
    answer = 0;
    for(i=0;i<cnt;i++){
        answer += arr[i]*m;
        m *= 3;
    }
    
    return answer;
}