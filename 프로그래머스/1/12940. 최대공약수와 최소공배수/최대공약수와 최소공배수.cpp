#include<bits/stdc++.h>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int i,x,chk;
    
    x = 1;
    if(n>m) swap(n,m);
    while(chk){
        chk = 0;
        for(i=2;i<=m;i++){
            if(n%i==0&&m%i==0){
                chk = 1;
                n /= i;
                m /= i;
                x *= i;
            }
        }
    }
    
    answer.push_back(x);
    answer.push_back(x*n*m);
    return answer;
}