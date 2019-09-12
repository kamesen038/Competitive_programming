#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;





int main() {

  int S;
  cout<<"input an integer"<<endl;
  cin>>S;
  cout<<(S>>1 & 1)<<" "<<!(S>>1 & 1)<<" "<<~(S>>1 & 1)<<endl;
  
  return 0;
}



