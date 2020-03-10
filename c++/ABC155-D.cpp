#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;






int main() {
  ll INF=1e18;
  ll l=-INF, r=INF;

  int N,i;
  ll K,A[200005];
  
  cin >> N >> K;
  for (i=0;i<N;i++) cin >> A[i];
  
  sort(a,a+n);

  
  while(r-l>1){
    mid=(l+r)/2;
    z=syakutori(mid);
    if(z<K){
      l=mid
	}
    else{
      r=mid
	}
    
  }
  
  cout<<l<<endl;
  
  return 0;
}



