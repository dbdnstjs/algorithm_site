#include<bits/stdc++.h>
#define N 50

using namespace std;

bool chk[N][N];
char arr[N][N];
int n,cnt;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

bool is_ok(int x,int y){
    if(x<0||x>=n||y<0||y>=n) return 1;
    if(chk[x][y]==1||arr[x][y]=='0') return 1;
    return 0;
}

void dfs(int x,int y)
{
    cnt++;
    for(int i=0;i<4;i++){
        if(!is_ok(x+dx[i],y+dy[i])){
            chk[x+dx[i]][y+dy[i]] = 1;
            dfs(x+dx[i],y+dy[i]);
        }
    }
    return;
}

int main()
{
    int i,j;
    vector<int> dap;
    
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",arr[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cnt = 0;
            if(arr[i][j]=='1'&&chk[i][j]==0){
                chk[i][j] = 1;
                dfs(i,j);
                if(cnt!=0) dap.push_back(cnt);
            }
        }
    }
    sort(dap.begin(),dap.end());
    printf("%d\n",dap.size());
    for(i=0;i<dap.size();i++) printf("%d\n",dap[i]);

    return 0;
}
