#include <bits/stdc++.h>
using namespace std;

#define ll long long

 pair<int,int> maxArray(int arr[3][3]){
    int imax = INT_MIN;
    int imin= INT_MAX;
    for(int i=0;i<3;i++){

      for(int j=0;j<3;j++){

            if(arr[i][j]>=imax){
                 imax = max(imax,arr[i][j]);
            }
            if(arr[i][j]<=imin){
                 imin = min(imin,arr[i][j]);
            }

        }

    }
    return {imax,imin};
}


 int findKey(int arr[3][3],int key){
    int flag=0;
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            if(key== arr[i][j]){
                return true;
            }

        }

    }

    return false;
}


void rowSum(int arr[3][3]){
int count =0;

        for(int i=0;i<3;i++){
            int sum =0,c_sum=0;
            for(int j=0;j<3;j++){

                sum += arr[i][j];
                c_sum += arr[j][i];
            }
            cout<<sum<<" "<<c_sum<<endl;
        }
}

int main(){
      int arr[3][3]={
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}

                  };

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){

    // }
    // arr[2][1]
    // ==>c* i+j

    //cout<<3 * 2+1<<arr[2][1];


    // ll arr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }

// cout<<arr[2][1];
//
// cout<<endl;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[j][i];
//         // count ++;
//         // if(count%3 ==0){
//         //     cout<<endl;
//         // }
//     }
//     cout<<endl;
// }

        rowSum(arr);

        int key =3;

        if(!findKey(arr,key)){
            cout<<"False";
        }

        else{
            cout<<"True";
        }
        cout<<endl;

        pair<int,int> result = maxArray(arr);
        cout<<result.first<<" "<<result.second;



return 0;
}
