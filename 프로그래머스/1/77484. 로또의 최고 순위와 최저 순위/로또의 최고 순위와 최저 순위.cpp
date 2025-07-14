#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int x,y,cnt,num,i,j;
    
    sort(lottos.begin(),lottos.end());
    sort(win_nums.begin(),win_nums.end());
    
    cnt = num = 0;
    for(i=0;i<lottos.size();i++){
        x = lottos[i];
        if(x==0){
            cnt++;
            continue;
        }
        for(j=0;j<win_nums.size();j++){
            y = win_nums[j];
            if(x==y){
               num++;
               break;
            }
        }
    } 
    
    if(cnt+num==0) answer.push_back(6);
    else answer.push_back(7-cnt-num);
    
    if(num==0) answer.push_back(6);
    else answer.push_back(7-num);
    
    return answer;
}