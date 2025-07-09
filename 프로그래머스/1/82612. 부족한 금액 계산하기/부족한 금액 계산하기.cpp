#include<bits/stdc++.h>

using namespace std;

long long solution(int price, int money, int count)
{
    long long i,answer = 0;
    
    for(i=1;i<=count;i++) answer += i*price;
    
    answer -= money;
    if(answer<0) answer = 0;
    
    return answer;
}