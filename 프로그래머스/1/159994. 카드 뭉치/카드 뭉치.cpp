#include<bits/stdc++.h>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string s1,s2;
    int num,loc1,loc2,siz1,siz2;
    
    siz1 = cards1.size();
    siz2 = cards2.size();
    loc1 = loc2 = num = 0;
    for(string s : goal){
        s1 = "";
        s2 = "";
        if(siz1>loc1) s1 = cards1[loc1];
        if(siz2>loc2) s2 = cards2[loc2];
        if(s==s1) loc1++;
        else if(s==s2) loc2++;
        else{
            return "No";
        }
    }
    
    return "Yes";
}