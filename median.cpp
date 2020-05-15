#include<bits\stdc++.h>
 
using namespace std;

int n,k;
vector<int> v;

bool can_do(int med){

    int ops = 0;

    for(int i = n/2;i<n;i++){
        if(med-v[i]>0){
            ops+=med-v[i];
            if(ops>k)
                return false;
        }else
        {
            break;
        }      
    }

    return (ops<=k);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >>k;
    int data;

    for(int i =0;i<n;i++){
        cin >> data;
        v.push_back(data);
    }

    int lo = 1;
    int hi= 2e9;

    int mid = 0;
    sort(v.begin(),v.end());

    while (lo<hi){

        mid = lo + (hi-lo+1)/2;

        if(can_do(mid)){
            lo = mid;
        }else
        {
            hi = mid-1;
        }
        
    }
   
   cout << lo;
    
}