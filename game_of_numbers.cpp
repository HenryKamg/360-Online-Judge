#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int getA(int n, int b)
{
  if(n==1&&b==1) return 1;
  if(n/2>=b) return b+1;
  else if(n/2<b) return b-1;

}

int main()
{
  int a, b;
  while(cin >> a >> b)
  {
    cout<<getA(a, b)<<endl;
  }
  return 0;
}