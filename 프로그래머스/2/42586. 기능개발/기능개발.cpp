#include<bits/stdc++.h>

using namespace std;

int arr[1000];

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int i,j,n,x,y,num;
    
    num = 0;
    n = progresses.size();
    for(i=0;i<n;i++){
        x = (100-progresses[i])/speeds[i]+1;
        if((100-progresses[i])%speeds[i]==0) x--;
        arr[num++] = x;
    }
    
    for(i=0;i<num;i++){
        x = arr[i];
        n = 1;
        for(j=i+1;j<num;j++){
            y = arr[j];
            if(x<y) break;
            n++;
            i = j;
        }
        answer.push_back(n);
    }
    
    return answer;
}