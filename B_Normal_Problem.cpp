#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string word;
        cin >> word;
        reverse(word.begin(), word.end());
        for(int i = 0; i <= word.length(); i++){
            if(word[i] == 'p'){
                word[i] = 'q';
            }
            else if(word[i] == 'q'){
                word[i] = 'p';
            }
        }
        cout << word << endl;
    }
    return 0;
}