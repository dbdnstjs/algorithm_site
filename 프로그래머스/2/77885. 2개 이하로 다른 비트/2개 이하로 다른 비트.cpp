#include<bits/stdc++.h>
#define N 1000000

using namespace std;

bool cmp1[N],cmp2[N];

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    long long x,i,j,num,cnt;
    
    for(i=0;i<numbers.size();i++){
        x = numbers[i];
        num = 0;
        while(x){
            cmp1[++num] = x%2;
            x /= 2;
        }
        
        x = numbers[i]+1;
        num = 0;
        while(x){
            cmp2[++num] = x%2;
            x /= 2;
        }
        
        cnt = -2;
        for(j=num;j>0;j--){
            if(cmp1[j]==cmp2[j]) continue;
            cnt++;
        }
        
        for(j=1;j<=num;j++){
            if(cnt<1) break;
            if(cmp1[j]==cmp2[j]) continue;
            cmp2[j] = cmp1[j];
            cnt--;
        }
        
        cnt = 0;
        x = 1;
        for(j=1;j<=num;j++){
            if(cmp2[j]) cnt += x;
            x *= 2;
        }
        answer.push_back(cnt);
        
        for(j=1;j<=num;j++) cmp1[j] = cmp2[j] = 0;
    }
    
    return answer;
}