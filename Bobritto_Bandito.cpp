#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int l = 0, r = 0, flag = 1;
        for(int j = 0; j < b; j++){
            if(l > c && flag){
                l--;
                flag = 0;
            }
            else if(r < d){
                r++;
                flag = 1;
            }
            if(j < b && (r == d || l == c)){
                flag = 1;
            }
        }
        cout << l << " " << r << endl;
    }
    return 0;
}