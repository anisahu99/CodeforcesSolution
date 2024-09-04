# include<bits/stdc++.h>
using namespace std;

#define endl "\n" 

void Y(){
  cout<<"YES"<<endl;
}
void N(){
  cout<<"NO"<<endl;
}

void guess_the_sequence(const vector<int> &b, int &n){
    vector<int> a;
    a.push_back(b[0]);

    for(int i=1;i<n;i++){
        if(a.back()<=b[i]){
            a.push_back(b[i]);
        }else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout<<a.size()<<endl;
    for(int val:a){
        cout<<val<<" ";
    }
    cout<<endl;
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
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        guess_the_sequence(b, n);
    }
 
    return 0;
}