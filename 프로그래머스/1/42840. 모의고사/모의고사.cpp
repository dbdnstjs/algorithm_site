#include<bits/stdc++.h>

using namespace std;

int num[5];

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int x,i;
    
    int arr[5][10] = {
        {},
        {1,2,3,4,5},
        {2,1,2,3,2,4,2,5},
        {3,3,1,1,2,2,4,4,5,5}
    };
    
    for(i=0;i<answers.size();i++){
        x = answers[i];
        if(x==arr[1][i%5]) num[1]++;
        if(x==arr[2][i%8]) num[2]++;
        if(x==arr[3][i%10]) num[3]++;
    }
    
    x = 0;
    for(i=1;i<=3;i++) if(x<num[i]) x = num[i];
    for(i=1;i<=3;i++) if(x==num[i]) answer.push_back(i);
    
    return answer;
}