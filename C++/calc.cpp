#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll a;
    cin>>a;
    if(a % 2 == 0){
        cout<<a/2;
    }
    else{
        cout<<(-1*(a+1)/2);
    }
    return 0;
}