#include<bits/stdc++.h>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0,cnt,i,j;
    
    for(i=1;i<=number;i++){
        cnt = 1;
        for(j=1;j<=i/2;j++) if(i%j==0) cnt++;
        if(cnt>limit) cnt = power;
        answer += cnt;
    }
    
    return answer;
}