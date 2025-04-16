#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, flag = 0, ind;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a[n][n], b[2*n], c[2*n];
        for(int j = 0; j < 2*n; j++) b[j] = c[j] = j + 1;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                cin >> a[j][k];
                c[a[j][k] - 1] = -1;
            }
        }
        //for(auto k : c) cout << k << " ";
        //cout << endl;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                b[j + k + 1] = a[j][k];
            }
        }
        for(auto k : c){
            if(k > 0) b[0] = k;
        }
        for(auto k : b) cout << k << " ";
        cout << endl;
    }
    return 0;
}