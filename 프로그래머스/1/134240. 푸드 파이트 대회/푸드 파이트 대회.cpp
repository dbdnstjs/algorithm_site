#include<bits/stdc++.h>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    int n = food.size();
    for(int i=1;i<n;i++) if(food[i]%2==1) food[i]--;
    for(int i=1;i<n;i++) for(int j=1;j<=food[i]/2;j++) answer += i+'0';
    answer += '0';
    for(int i=n-1;i>0;i--) for(int j=1;j<=food[i]/2;j++) answer += i+'0';
    return answer;
}