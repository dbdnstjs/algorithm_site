#include<bits/stdc++.h>

using namespace std;

int prime[5000];

bool is_prime(int x)
{
    for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
    return 1;
}

int solution(vector<int> nums) {
    int i,j,k,n,answer = 0;
    
    n = nums.size();
    
    for(i=2;i<=3000;i++) prime[i] = is_prime(i);
    for(i=0;i<n-2;i++) for(j=i+1;j<n-1;j++) for(k=j+1;k<n;k++) answer += prime[nums[i]+nums[j]+nums[k]];

    return answer;
}