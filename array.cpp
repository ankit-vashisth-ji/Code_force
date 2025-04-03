#include <bits/stdc++.h>
using namespace std;


void Sorting(vector<int> arr){
    int start =0 , end =arr.size()-1;
    int i=0;
    while(i<=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else {
            swap(arr[end],arr[i]);
            end--;

        }

    }

    for(auto val:arr){
        cout<< val;
    }

}

int main(){

    vector<int>arr{1,0,1,0,1,1,0,0};

    Sorting(arr);

    return 0;
}
