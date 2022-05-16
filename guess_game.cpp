#include <bits/stdc++.h>
using namespace std;

int main(){
    int guess,ans=5,w=0;
    cout<<"Guess the number between 1 and 10, only 3 chances \n";
    for(int i=1;i<=3;i++){
        cout<<"Guess number "<<i<<" : ";
        cin>>guess;
        if(guess==ans){
            w=1;
            break;
        }
    }
    if(w==1){
        cout<<"You WON";
    } else {
        cout<<"You LOST";
    }
}