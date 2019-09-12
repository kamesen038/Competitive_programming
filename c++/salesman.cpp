#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int INF=100000000;
int n=5;
int dp[1<<5][5];
int d[5][5]={{INF,3,INF,4,INF,},
	     {INF,INF,5,INF,INF,},
	     {4,INF,INF,5,INF,},
	     {INF,INF,INF,INF,3,},
	     {7,6,INF,INF,INF,},
};


int rec(int S, int v){
  if (dp[S][v] >= 0){
    return dp[S][v];
      }
    
  if(S==(1<<n)-1 && v==0){
    return dp[S][v]=0; 
  }
  
  int res =INF;
  
  for(int u=0; u<n; u++){
    if (!(S>>u & 1) ){
      res = min(res, rec(S|(1<<u),u)+d[v][u]);
    }
  }
  
  return dp[S][v]=res;
  
}




int main() {
  

  
  
  memset(dp,-1, sizeof(dp));
  printf("%d\n",rec(0,0));
  cout<<dp[0][1]<<endl;
  
  
}



