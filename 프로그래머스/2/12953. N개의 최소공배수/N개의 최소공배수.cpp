#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0,i,j,k,cnt,n;
    
    n = arr.size();
    sort(arr.begin(),arr.end());
    
    answer = 1;
    for(i=2;i<=100;i++){
        cnt = 0;
        for(j=0;j<n;j++){
            if(arr[j]%i==0) cnt++;
            if(cnt==2){
                for(k=0;k<n;k++) if(arr[k]%i==0) arr[k] /= i;
                answer *= i;
                i--;
                break;
            }
        }
    }
    
    for(i=0;i<n;i++) answer *= arr[i];
    
    return answer;
}