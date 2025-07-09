#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min,i,loc;
    
    min = 0x7fffffff;
    for(i=0;i<arr.size();i++){
        if(min>arr[i]){
            min = arr[i];
            loc = i;
        }
    }
    for(i=0;i<arr.size();i++) if(i!=loc) answer.push_back(arr[i]);
    
    if(answer.empty()) answer.push_back(-1);
    return answer;
}