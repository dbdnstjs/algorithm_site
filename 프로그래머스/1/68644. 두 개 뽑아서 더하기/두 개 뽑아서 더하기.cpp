#include<bits/stdc++.h>

using namespace std;

bool chk[10100];

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int i,j,n;
    
    n = numbers.size();
    for(i=0;i<n-1;i++) for(j=i+1;j<n;j++) chk[numbers[i]+numbers[j]] = 1;
    for(int i=0;i<=100*100;i++) if(chk[i]) answer.push_back(i);
    
    return answer;
}