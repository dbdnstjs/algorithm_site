#include<bits/stdc++.h>

using namespace std;

bool is_prime(long long x){
    if(x<2) return 0;
    if(x==2) return 1;
    if(x%2==0) return 0;
    for(long long i=3;i*i<=x;i+=2) if(x%i==0) return 0;
    return 1;
}

int solution(int n, int k) {
    int answer = 0;
    string s,num;
    
    while(n){
        s = to_string(n%k) + s;
        n /= k;
    }
    
    for(char c : s){
        if(c=='0'){
            if(num.length()==0) continue;
            answer += is_prime(stoll(num));
            num = "";
            continue;
        }
        num += c;
    }
    
    if(num.length()) answer += is_prime(stoll(num));
    
    return answer;
}