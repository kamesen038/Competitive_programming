#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



//int n,m,k[MAX_N];


bool binary_search(int n,int x,int k[]){
  int l=0,r=n;
  while(r-l>=l){
    int i=(l+r)/2;
      if (k[i]==x) return true;
      else if (k[i]<x) l=i+1;
        else r=i;
        }
  return false;

}



int main() {
  int n=10,m=4;
  //int a[10];
  int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int k[10]={1,2,3,4,5,6,7,8,9,10};


  int x = m;
  int l=0,r=n;
  while(r-l>=l){
    int i=(l+r)/2;
    cout<<k[i]<<" "<< l<<" "<<i<<" "<<r<<" "<<endl;
    if (k[i]==x) printf("True");
    else if (k[i]<x) l=i+1;
    else r=i;
  }
  printf("False");
  
  return 0;
}



