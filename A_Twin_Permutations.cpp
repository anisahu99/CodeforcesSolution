# include<bits/stdc++.h>
using namespace std;

#define endl "\n"

/*
    Intuition:
                to achieve this a1+b1<=a2+b2<= ... <=an+bn
                simply we understand through
                a- 1 2 4 5 3
                b- 5 4 2 1 3
             a+b-  6 6 6 6 6
                 follow the condition
*/

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
        for(int i=0;i<n;i++){
            cout<<abs(n-arr[i])+1<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}