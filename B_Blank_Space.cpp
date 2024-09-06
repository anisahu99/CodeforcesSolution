# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

/*
    Intuition & Approach :
                1.try to count longest length of blank space(mean 0).
                2.first we will find out first index of 0 occur in array.
                3.then we will count consecutive zeros length
                4.if we get any 1 we will check this is our longest_zeros_length
                if it is we will store it and reset our count variable
                6.otherwise we will reset our count variable
                and try to find out rest of array
*/

int length_of_the_longest_blank_space(const vector<int> &arr, const int &n){

    int count =0;
    int i=0;
    while( i<n && arr[i]==1 ) i++;
    int longest_length = 0;
    while(i<n){
        if( arr[i]==0 ){
            count++;
        }else{
            longest_length = max( longest_length , count );
            count = 0;
        }
        i++;
    }
    longest_length = max( longest_length , count );
    return longest_length;
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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<length_of_the_longest_blank_space(arr, n)<<endl;
    }
  
    return 0;
}