#include<bits/stdc++.h>

using namespace std;

int solution(int num) {
    int i;
    long long n;
    
    n = num;
    if(n==1) return 0;
    for(i=1;i<=500;i++){
        if(n%2==0){
            n /= 2;
        }else{
            n = (n*3) + 1;
        }
        if(n==1) return i;
    }
    
    return -1;
}