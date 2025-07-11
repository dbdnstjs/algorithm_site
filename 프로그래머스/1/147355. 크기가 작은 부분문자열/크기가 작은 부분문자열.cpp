#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int chk,i,j,n,m,answer = 0;
    n = t.size();
    m = p.size();
    for(i=0;i<n-m+1;i++){
        chk = 1;
        for(j=i;j<m+i;j++){
            if(t[j]>p[j-i]){
                chk = 0;
                break;
            }else if(t[j]<p[j-i]){
                chk = 1;
                break;
            }
        }
        if(chk) answer++;
    }
    return answer;
}