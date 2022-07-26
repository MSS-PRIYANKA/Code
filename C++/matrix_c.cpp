#include<iostream>
using namespace std;
int main(){
    int t;
    int x, y, k1, k, l, m, n, c, d;
    cin>>t;
    while(t--){
        int n, z;
        cin>>n;
        int arr[n][n];
        string s;
        while(cin>>s){
            if (s == "SET"){
                cin>>c>>d>>k1;
                arr[c][d] = k1;
                break;
            } 
            else if (s == "SUM"){
                cin>>x>>y>>m>>n;
                int sum = 0;
                if(k == m and l == n){
                    cout<<arr[x][y]<<"\n";
                        break;
                    }
                    for(int a=k;a<=m;a++){
                        for(int b = l; b <= n;b++){
                            sum += arr[a][b];
                    }
                }
                cout<<sum<<"\n";
                break;
                }
            else if (s == "END"){
                break;
            }
            cout<<"\n";
        }
    }
}