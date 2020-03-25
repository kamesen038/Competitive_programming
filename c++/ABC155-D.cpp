#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;





int main() {


  int N,K,i,j;
//ll K;
  vector<ll> A;
  ll INF=1e18;
  ll l=-INF-1, r=INF+1;
  ll mid,c,count;
  ll left,right,start,end;
 

  cin >> N >> K;
  A.resize(N);
  for (i=0;i<N;i++) cin >> A[i];
     
  sort(A.begin(), A.end());
  
  
  while(l+1<r){
    c=(l+r)/2;
    count=0;
    for (i=0;i<N;i++){

      
      if (A[i]<0){
	start=-1;
	end=N;
	while( start+1<end){
	  mid=(start + end)/2;
	  if( A[i] * A[mid] <c ){
	    end=mid;
	  }
	  else {
	    start=mid;
	  }
	}
	count+=(N-end);
	if (start<i){
	  count-=1;
	}}

      
      
      else{
	start=-1;
	end=N;
	while( start+1 <end ){
	  mid=(start+end)/2;
	  if(A[i]*A[mid]<c){
	    start=mid;
	  }
	  else{
	    end=mid;
	  }
	}
	count+=end;
	if (A[i]*A[i]<c){
	    count-=1;
	    
	}
      }
      
    }
    
    count=(count/2);
    cout<<l<<" "<<c<<" "<<count<<" "<<r<<endl;

    if (count<K){
      l=c;
    }
    else{
      r=c;
    }     
  }
  cout<<l<<endl;
  
  return 0;
}



