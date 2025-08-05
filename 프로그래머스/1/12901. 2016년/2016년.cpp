#include<bits/stdc++.h>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<a-1;i++) b += arr[i]; 
    b %= 7;
    
    if(b==0) answer += "THU";
    else if(b==1) answer += "FRI";
    else if(b==2) answer += "SAT";
    else if(b==3) answer += "SUN";
    else if(b==4) answer += "MON";
    else if(b==5) answer += "TUE";
    else if(b==6) answer += "WED";
    
    return answer;
}