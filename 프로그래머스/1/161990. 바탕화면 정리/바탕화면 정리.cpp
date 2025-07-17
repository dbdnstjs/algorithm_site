#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int maxx,maxy,minx,miny,i,j;
    
    maxx = maxy = 0;
    minx = miny = 100;
    for(i=0;i<wallpaper.size();i++){
        for(j=0;j<wallpaper[i].size();j++){
            if(wallpaper[i][j]!='#') continue;           
            if(maxx<j+1) maxx = j+1;
            if(maxy<i+1) maxy = i+1;
            if(minx>j) minx = j;
            if(miny>i) miny = i;
        }
    }
    
    answer.push_back(miny);
    answer.push_back(minx);
    answer.push_back(maxy);
    answer.push_back(maxx);
    
    return answer;
}