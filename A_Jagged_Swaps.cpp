# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

/*
    Observation
    indexing start from 1
    index i in [2,n-1]
    if a[i-1]<a[i]>a[i+1] => swap(a[i],a[i+1])
    first element cannot move from its position ---> if(first element is not 1) cout<<"NO";
    1 3 5 2 4
    after 1 round
    1 3 2 5 4
    after 2 round
    1 3 2 4 5
    nth element get its correct position
    1 3 2 4 |5
    remaning n-1(4) element
    n-1 also get correct by doing same means if 1st at first position then array will also get sorted
*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
 
    return 0;
}