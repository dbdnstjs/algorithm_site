#include<bits/stdc++.h>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0,loc = -m;
    
    sort(section.begin(),section.end());
    for(int x:section){
        if(loc>x) continue;
        answer++;
        loc = m+x;
    }
    
    return answer;
}