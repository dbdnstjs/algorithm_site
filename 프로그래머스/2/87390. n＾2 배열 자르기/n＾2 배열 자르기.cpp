#include<bits/stdc++.h>
#define MAX(x,y) (x>y?x:y)

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i=left;i<=right;i++) answer.push_back(MAX(i/n,i%n)+1);
        
    return answer;
}
