# include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int ans;
    cin>>ans;
    vector<int> order(3,0);
    order[ans-1] =1;

    for(int i=0;i<3;i++){
        int a, b;
        cin>>a>>b;
        a--,b--;
        swap(order[a],order[b]);
    }
    for(int i=0;i<3;i++){
        if(order[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}