#include<bits/stdc++.h>

using namespace std;

bool chk[101][101];
int stx,sty,n,m;

bool is_ok(int x,int y){
    if(x<0||y<0||x>=m||y>=n) return 0;
    if(chk[x][y]==1) return 0;
    return 1;
}

void startx(int x,int y){
    for(int i=1;i<=x;i++){
        if(!is_ok(stx+(y*i),sty)){
            return;
        } 
    }
    stx += (y*x);
}

void starty(int x,int y){
    for(int i=1;i<=x;i++){
        if(!is_ok(stx,sty+(y*i))){
            return;
        } 
    }
    sty += (y*x);
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    char c,s;
    int i,j;
    
    n = park.size();
    m = park[0].size();
    
    stx = sty = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c = park[i][j];
            if(c=='S'){
                stx = j;
                sty = i;
            }else if(c=='X'){
                chk[j][i] = 1;
            }
        }
    }
    
    for(i=0;i<routes.size();i++){
        c = routes[i][0];
        s = routes[i][2];
        s -= '0';
        if(c=='N'){
            starty(s,-1);
        }else if(c=='S'){
            starty(s,1);
        }else if(c=='W'){
            startx(s,-1);
        }else if(c=='E'){
            startx(s,1);
        }
    }
    
    answer.push_back(sty);
    answer.push_back(stx);
    return answer;
}