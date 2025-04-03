#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int Sorting(vector<int> arr){
    int start =0 , end =arr.size()-1;
    int i=0;
    while(i<arr.size()){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else {
            swap(arr[i],arr[end]);
            end--;
        }
    }
    
    for(auto value:arr){
        cout<<value<<" ";
    }
   
    return {};

}

int main(){

//    vector<int>v{10,20,30,40,50,60,70};
//    
//    for(int i=0;i<v.size();i++){
//        for(int j=0;j<v.size();j++){
//            
//        for(int k=0;k<v.size();k++){
//            for(int l=0;l<v.size();l++){
//
//                if(v[i]+v[j]+v[k]+v[l]==150){
//                    cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "<<v[l]<<" "<<endl;
//                    }
//                }
//            }
//        }
//    }
//
//
    vector<int>arr{1,0,1,0,1,1,0,0};

        cout<<Sorting(arr);

    return 0;
}
