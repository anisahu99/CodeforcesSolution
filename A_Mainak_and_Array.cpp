# include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define odd(n) (n&1)
#define even(n) !(n&1)

/*
    Intuition:
        1.after observation your answer will be
        2a.if maximum element present at (n-1)th position and minimum element
        present at oth position then asnwer will be  --->a[n-1]-a[0]
        2b.if min(a[i])-->minimum of array and max(a[i])-->maximum of array
        present adjacent and first min(a[i]) then max(a[i]) the answer will be
        --->max(a[i])-min(a[i]).
        2c.if minimum element present at 0th index then answer will be
        ---> max(a[i])-a[0]
        2d.if maximum element present at (n-1)th index then answer will be
        ---> a[n-1]-min(a[i])
        2e.either rotate array in such way a maximum element take (n-1)th pos
        OR rotate array in such way a minimum element take 0th pos
        OR Rotate whole array (n-1) times and take maximum value of a[n-1]-a[0]
        in every rotation.
        Take maximum value in all such cases
*/
int maximum_value(const vector<int> &a, const int &n){
    int min_i, max_i, minValue = 1000, maxValue = 0;
    for( int i=0; i<n; i++){
        if( a[i]>maxValue){
            maxValue = a[i];
            max_i = i;
        }
        if(minValue>=a[i]){
            minValue = a[i];
            min_i = i;
        }
    } 
    if( max_i==n-1 && min_i==0 ) return a[n-1]-a[0];
    if( max_i+1 == min_i ) return a[max_i]-a[min_i];
    if( min_i==0 ) return a[max_i]-a[min_i];
    if( max_i==n-1 ) return a[max_i]-a[min_i];

    int ans1 = max(a[max_i]-a[0],a[n-1]-a[min_i]);
    
    int ans2 = a[n-1]-a[0];
    for(int i=0;i<n-1;i++){
        ans2 = max( ans2,a[i]-a[i+1] );
    }

    return max(ans1,ans2);
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
        vector<int> a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        cout<<maximum_value( a, n )<<endl;
    }

    return 0;
}