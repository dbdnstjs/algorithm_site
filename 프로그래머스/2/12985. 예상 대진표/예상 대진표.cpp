#include<bits/stdc++.h>

using namespace std;

int solution(int n, int a, int b)
{   
    int x,y,answer,cnt;
    
    answer = 0;
    cnt = 1;
    while(1){
        answer++;
        cnt *= 2;
        x = a/cnt;
        y = b/cnt;
        if(a%cnt==0) x--;
        if(b%cnt==0) y--;
        if(x==y) break;
    }

    return answer;
}