#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int bubblesort(vector<ll> &v){
    int n = v.size();
    int c = 0;
    for(int i = 0; i<n-1;i++){
        for(int j = 0; j<n-i-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                c++;
            }
        }
    }
    return c;
}
int main(){
    ll n, a;
    cin>>n;
    vector<ll> v;
    for(int i = 0; i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int s = bubblesort(v);
    for(int i = 0; i<v.size();i++){
        if(i != v.size()-1){
            cout<<v[i]<<" ";
        }
        else{
            cout<<v[i];
        }
    }
    cout<<"\n";
    cout<<s<<"\n";
}
