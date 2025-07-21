#include<bits/stdc++.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int i,x,y,cntx,cnty;
    
    for(i=1;i*i<=yellow;i++){
        if(yellow%i==0){
            x = yellow/i;
            y = i;
            if((x*2)+(y*2)+4==brown){
                cntx = x;
                cnty = y;
            }
        }
    }
    
    answer.push_back(cntx+2);
    answer.push_back(cnty+2);
    return answer;
}