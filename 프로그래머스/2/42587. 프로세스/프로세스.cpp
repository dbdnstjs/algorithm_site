#include<bits/stdc++.h>

using namespace std;

int loc[111];

int solution(vector<int> priorities, int location) {
    int n,num,x,y,i,j,answer = 0;
    
    n = priorities.size();
    
    num = y = 0;
    for(i=9;i>0;i--){
        x = y;
        for(j=x;j<n;j++){
            if(priorities[j]==i){
                loc[num++] = j;
                y = j;
            } 
        } 
        
        for(j=0;j<x;j++){
            if(priorities[j]==i){
                loc[num++] = j;
                y = j;
            } 
        }
    }
    
    for(i=0;i<num;i++){
        if(loc[i]==location){
            answer = i+1;
            break;
        }
    } 
    
    return answer;
}