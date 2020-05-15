#include<bits\stdc++.h>

using namespace std;

int main(){

    int n,data;

    cin >>n >>data;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

   int up = upper_bound(arr,arr+n,data)-arr;
   int low = lower_bound(arr,arr+n,data)-arr;

    cout << up << " " << low;
   for(int i=low;i<up;i++){
       cout << arr[i] << " ";
   }
}