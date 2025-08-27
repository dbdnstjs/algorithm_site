#include<bits/stdc++.h>

using namespace std;

queue<char> qu,qu_copy;
char arr[1011];

int solution(string s) {
    int answer,n,i,j,len,chk,sum;
    char q;
    
    answer = 0;
    for(char c : s) qu.push(c);
    n = qu.size();
    if(n%2==1) return 0;
    
    for(i=0;i<n;i++){
        qu_copy = qu;
        chk = sum = len = 0;
        for(j=0;j<n;j++){
            arr[++len] = qu_copy.front();
            qu_copy.pop();
            if(arr[len]=='}'){
                if(arr[len-1]=='{'){
                    len -= 2;
                    if(len==0) sum++;
                }else{
                    chk = 1;
                    break;
                }
            }else if(arr[len]==']'){
                if(arr[len-1]=='['){
                    len -= 2;
                    if(len==0) sum++;
                }else{
                    chk = 1;
                    break;
                }
            }else if(arr[len]==')'){
                if(arr[len-1]=='('){
                    len -= 2;
                    if(len==0) sum++;
                }else{
                    chk = 1;
                    break;
                }
            }
        }
        if(chk==0){
            answer = sum;
            break;
        }
        q = qu.front();
        qu.pop();
        qu.push(q);
    }
    
    
    return answer;
}