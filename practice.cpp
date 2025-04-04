#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

    ll n;
    cin>>n;

    vector<ll> v;

     ll t;
    while(n>0){
        t = n%10; //100--> 0
        v.push_back(t);// 0

        n = n/10;//
        reverse(v.begin(),v.end());
    }
    // for(auto t : v){
    //     cout<<t;
    // }

     ll fours =0,sevens=0;
     ll tiger =0;
    for(ll i=0;i<v.size();i++){
        if(v[i] == 4 ){
            fours++;
        }
        else if (v[i] == 7 ){
            sevens++;
        }
        else{
            tiger++;
        }

    }
    // cout<<flag;
    // cout<<v.size();
    //
      // cout<<(fours+sevens)<<endl;
    if(fours==0 && sevens ==0){
        cout<<"NO";
    }

    // else if((fours>0 && sevens>0) && (fours%4==0||sevens%7==0) ){
    //     cout<<"YES";
    // }

    else if((fours+sevens) ==4 ||(fours+sevens) ==7  ){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
