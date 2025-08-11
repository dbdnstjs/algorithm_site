#include<bits/stdc++.h>

int arr[10][10];

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int i,j;
    
    for(i=0;i<X.size();i++) arr[1][X[i]-'0']++;
    for(i=0;i<Y.size();i++) arr[2][Y[i]-'0']++;
    for(i=9;i>0;i--) for(j=0;j<min(arr[1][i],arr[2][i]);j++) answer += to_string(i);
    
    if(answer.empty()){
        if(min(arr[1][0],arr[2][0])>0) answer += "0"; 
        else answer += "-1";
    }else{
        for(j=0;j<min(arr[1][0],arr[2][0]);j++) answer += "0";
    }
    
    return answer;
}