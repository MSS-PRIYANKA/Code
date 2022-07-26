#include<iostream>
using namespace std;
int main(){
    int t, n, a, c, d;
    cin>>t;
    while(t--){
        cin>>n;
        //vector<int>v;
        for(int i = 1; i <= n;i++){
            cin>>a;
            if(a == 1){
                c = i;
            }
            else if(a == n){
                d = i;
            }
        }
        cout<<c<<" "<<d<<"\n";
        if(c == 1 and d == n){
            cout<<0<<"\n";
        }
        else{
            cout<<abs(d-n-1)<<"\n";
        }
    }
}