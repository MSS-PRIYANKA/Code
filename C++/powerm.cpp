#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
void isMPowerOfN(int m, int n)
{
  int i, product=1;
      for(i=0;i<m;i++){
          product *= n;
          if(product == m){
              cout<<"true\n";
              break;
          }
          else if(product > m){
              cout<<"false\n";
              break;
          }
      }
  }
int main(){
    int i = 0, t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        isMPowerOfN(a, b);
    }
}