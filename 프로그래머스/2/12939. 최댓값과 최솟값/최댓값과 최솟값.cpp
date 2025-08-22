#include<bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int n,m,min_num,max_num,i,chk=0;
    
    min_num = 0x7fffffff;
    max_num = -0x7fffffe;
    m = 0;
    
    n = s.size();
    for(i=0;i<n;i++){
        if(s[i]=='-'){
            chk = 1;
        }else if(s[i]==' '){
            if(chk==1) m *= -1;
            if(min_num>m) min_num = m;
            if(max_num<m) max_num = m;
            chk = 0;
            m = 0;
        }else{
            m *= 10;
            m += s[i]-'0';
        }
    }
    
    if(chk==1) m *= -1;
    if(min_num>m) min_num = m;
    if(max_num<m) max_num = m;
    
    answer = to_string(min_num);
    answer += ' ';
    answer += to_string(max_num);
    
    return answer;
}