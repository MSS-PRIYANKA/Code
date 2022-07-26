#include<iostream>
using namespace std;
int main(){
    int t, n, s=1;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<"Case #"<<s<<":"<<"\n";
        s++;
        n = (n /2) + 1;
        for(int i = 1;i<n+1;i++){
            for(int j = 1; j<n-i+1; j++){
                cout<<" ";
            }
            for(int j = 1; j < 2*i;j++){
                if(j == 1 || j == 2*i-1){
                    cout<<"*";
                }   
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }

        for(int i = n-1; i> 0;i--){
            for(int j = 1; j<n-i+1;j++){
                cout<<" ";
            }
            for(int j = 1; j < 2*i;j++){
                if(j == 1 || j == 2*i-1){
                    cout<<"*";
                }   
                else{
                    cout<<" ";
                }
                
            }
            cout<<"\n";
        }
    }
}