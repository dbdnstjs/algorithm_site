#include<bits/stdc++.h>
#define N 1000011

using namespace std;

bool hap[N];

int solution(vector<int> elements) {
    int n,x,i,j,sum,answer = 0;
    
    sum = 0;
    n = elements.size();
    for(int i : elements) sum += i;
    for(i=0;i<n;i++){
        x = 0;
        for(j=0;j<n;j++){
            x += elements[(i+j)%n];
            hap[x] = 1;
        }
    }
    
    for(i=0;i<=sum;i++) if(hap[i]) answer++;
    return answer;
}