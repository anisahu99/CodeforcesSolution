# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}

/*
    the intuition behind is that find the number in array which is most nearer to 0 on number line
*/

int minimum_number_of_operations(const vector<int> &a, int &n){
    int min_op = INT_MAX;
    for(int val:a){
        min_op = min(min_op, abs(val-0));
    }
    return min_op;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minimum_number_of_operations(a,n)<<endl;
 
    return 0;
}