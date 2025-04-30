#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        int n;
        cin >> n;
        int c[n], min = 0, max = n - 1, b[n];
        cin >> a;
        for(int i = 0; i < n; i++){
            c[i] = i+1;
            b[i] = i+1;
        }
        for(int i = a.length() - 1; i >= 0; i--){
            if(a[i] == '>'){
                b[i + 1] = c[max];
                max--;
            }
            else{
                b[i + 1] = c[min];
                min++;
            }
        }
        b[0] = c[min];
        for(auto i : b) cout << i << " ";
        cout << endl;
    }
    return 0;
}