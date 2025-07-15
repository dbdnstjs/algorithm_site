#include<bits/stdc++.h>

using namespace std;

struct str{
    int x,y;
};

queue<str> qu;
int arr[1111][1111];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m,cnt,sum;


bool is_ok(int x,int y){
    if(x>=m||x<0||y>=n||y<0) return 1;
    if(arr[x][y]!=0) return 1;
    return 0;
}

void dfs(int x,int y)
{
    for(int i=0;i<4;i++){
        if(is_ok(x+dx[i],y+dy[i])) continue;
        arr[x+dx[i]][y+dy[i]] = 1;
        qu.push({x+dx[i],y+dy[i]});
        cnt++;
    }

    return;
}

int main()
{
    int i,j,siz,locx,locy,dap;
    
    scanf("%d %d",&n,&m);
    sum = cnt = 0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                qu.push({i,j});
                cnt++;
            }else if(arr[i][j]==-1){
                sum++;
            }
        }
    }

    dap = -1;
    while(!qu.empty()){
        siz = qu.size();
        dap++;
        for(i=0;i<siz;i++){
            locx = qu.front().x;
            locy = qu.front().y;
            qu.pop();
            dfs(locx,locy);
        }
    }

    if(n*m-sum-cnt!=0) printf("-1");
    else printf("%d",dap);
    return 0;
}
