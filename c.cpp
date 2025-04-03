#include <bits/stdc++.h>
using namespace std;

#define ll long long

// int UniqueElement(vector<int> arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

int main(){
    /*
    vector<int>v1{1,2,3,3,4};
    vector <int> v2{2,3,4,5};
    vector <int> v3;

    for(int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
           if (v1[i]==v2[j]){
                v2[j]=INT_MIN;//minimum integer smallest

                v3.push_back(v1[i]);
            }
        }
    }

    for(auto value: v3){
        cout<<value<<endl;
    }
    */
    vector<int> arr{1,1,2,3,3};

    int y = UniqueElement(arr);
    cout<<y;
      return 0;
}
