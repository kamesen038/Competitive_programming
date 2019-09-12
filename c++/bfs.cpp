// i/o example

#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int main ()
{
  typedef pair<int, int> P;
  
  
  
  queue<int> que;
    
    que.push(1);
  que.push(2);


  printf("%d\n",que.front());

  return 0;
}


