#include <iostream>
using namespace std;
//http://www.spoj.com/problems/AGGRCOW/
// Done 
#include<bits/stdc++.h>

#define ll  long long

const ll n = 1e4;

const ll M = n*(n+1)/2;

vector<ll> sub(M);

void print(vector<ll> v){
    ll N = v.size();
    for (ll i = 0; i < N; ++i)
    {
        cout << v[i] << " ";
    }
    cout << "\n" ;
}

bool contains_9(ll num){
    while(num > 0){
        if(num % 10 == 9){
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    
    for (int t = 0; t < T; ++t)
    {
        //cout << t << " #########################" << endl;
        ll N,M ;
        cin >> N >> M;

        vector<string> ar(N);

        for(ll i = 0; i < N; i++){
            cin >> ar[i];
        }

        for(ll i = 0; i < N; i++){
            cout << ar[i] << endl;
        }

        
        
        
    }
    
    return 0;
}