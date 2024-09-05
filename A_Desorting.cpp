# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

/*
    Intuition:
                1. if array is not sorted simply return 0.
                2. otherwise we will find out min_diff_adjacent (difference of adjacent element) and their difference is minimum in entire array
                3. so what will we do we try to increase arr[i-1] 
                   and decrease to arr[i] (adjacent element)so that their difference become more minimum and 
                   overcross each other we will get our desired answer i.e array become unsorted.
                4. Please dry run to see how they overcross each other.

    Approach: 
                1. check array is already sorted or not if not simply return 0.
                2. otherwise we will find out min_diff_adjacent (difference of adjacent element).
                3. if minimum_difference_in_array is odd then simply add +1 divide by 2 we get our answer.
                4. if minimum_difference_in_array is even then simply divide by 2 then add +1 we get our answer.


*/

int minimum_number_of_operations(vector<int> &arr, const int &n){
    bool isAscending = true;
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            isAscending = false;
            break;
        }
    }
    //  218247166
    // 122231862

    if( !isAscending ) return 0;

    int min_diff_in_array = arr[n-1]-arr[n-2];
    for(int i=0;i<n-1;i++){
        min_diff_in_array = min( min_diff_in_array, arr[i+1]-arr[i] );
    }

    if( min_diff_in_array&1 ){
        return (min_diff_in_array+1)/2;
    }else{
         return ( min_diff_in_array/2 + 1 );
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<minimum_number_of_operations(arr, n)<<endl;
    }
  
    return 0;
}
