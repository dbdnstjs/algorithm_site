#include<bits/stdc++.h>

using namespace std;

int solution(int left, int right) {
    int i,j,cnt,answer = 0;
    
    for(i=left;i<=right;i++){
        cnt = 0;
        for(j=1;j<=i;j++) if(i%j==0) cnt++;
        if(cnt%2==0) answer += i;
        else answer -= i;
    }
    
    return answer;
}