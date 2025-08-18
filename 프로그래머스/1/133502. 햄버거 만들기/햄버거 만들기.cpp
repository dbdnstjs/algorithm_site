#include<bits/stdc++.h>

using namespace std;

int arr[1000111];

int solution(vector<int> ingredient) {
    int loc,ch,answer = 0;
    
    loc = 0;
    for(int i : ingredient){
        arr[++loc] = i;
        if(i==1&&loc>3){
            ch = 1;
            for(int j=1;j<=3;j++) if(arr[loc-4+j]!=j) ch = 0;
            if(ch){
                loc -= 4;
                answer++;
            }
        }
    }
    
    return answer;
}