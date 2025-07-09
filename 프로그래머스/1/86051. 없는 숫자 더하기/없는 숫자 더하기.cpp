#include<bits/stdc++.h>

using namespace std;

bool chk[15];

int solution(vector<int> numbers) {
    int i,answer = 0;
    
    for(i=0;i<numbers.size();i++) chk[numbers[i]] = 1;
    for(i=1;i<10;i++) if(!chk[i]) answer += i;
    
    return answer;
}