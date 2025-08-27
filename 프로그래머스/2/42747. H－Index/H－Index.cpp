#include<bits/stdc++.h>

using namespace std;

bool my_sort(int x,int y)
{
    return x>y;
}

int solution(vector<int> citations) {
    int n,i,answer = 0;
    
    n = citations.size();
    sort(citations.begin(),citations.end(),my_sort);
    for(i=1;i<=n;i++) if(citations[i-1]>=i&&answer<i) answer = i;
    
    return answer;
}