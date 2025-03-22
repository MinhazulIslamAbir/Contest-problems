#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int a, count = 0;
        cin >> a;
        int j = a - 1, k = 1;
        while(j != 0 && k != a){
            count++;
            j--;
            k++;
        }
        cout << count << endl;
    }
    return 0;
}