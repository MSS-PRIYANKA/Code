#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, k, key;
    cin>>n;
    ll a[n];
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    cin>>k;
    sort(a, a+n);
    while(k--){
        int count = 0;
        cin>>key;
        if(a[0] >= key){
            cout<<"-2147483648"<<"\n";
            continue;
            }
        if(a[n-1] < key){
            cout<<a[n-1]<<"\n";
            continue;
        }
        for(int i = 0; i<n;i++){
            if(a[i] == key){
                cout<<a[i]<<"\n";
                count++;
                break;
            }
            if(a[i] > key){
                cout<<a[i-1]<<"\n";
                count++;
                break;
            }
        }
    }
}