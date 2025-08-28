#include<bits/stdc++.h>
#define N 1000011

using namespace std;

int arr[N];

vector<int> solution(vector<int> numbers) {
    int n,i,j,loc,x;
    vector<int> answer,dap;
    
    n = numbers.size();
    
    loc = 0;
    for(i=n-1;i>=0;i--){
        x = numbers[i];
        for(j=loc;j>=1;j--){
            if(x<arr[j]) break;
            arr[loc--] = 0;
        }
        
        if(loc==0) dap.push_back(-1);
        else dap.push_back(arr[loc]);
        arr[++loc] = x;
    }
    
    for(i=0;i<n;i++) answer.push_back(dap[n-i-1]);
    
    return answer;
}