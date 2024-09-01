# include<bits/stdc++.h>
using namespace std;

int checkZeroPos(int num){
    if(num==0) return 1;
    int pos = 1;
    int count=0;
    while(num){
        if( num%10==0 ) count++;
        num /=10;
        pos++;
    }
    if(count) return 
    return 0;
}
void solve(vector<int> &nums, int &k){
    // maybe testcase me mostly non zero wala number ho aur sirf kuch hi zero vale ho.
    unordered_map<int,vector<int>> zero_pos_num;
    for(int num:nums){
        int pos = checkZeroPos(num);
        if(pos){
            zero_pos_num[pos].push_back(num);
        }
    }
    
    int mxCount = 0;
    for(auto it:zero_pos_with_count){
        mxCount = max(mxCount,it.second.size());
    }
    n += mxCount + zero_pos_num.size()>1?1:0 ;

    cout<<n<<endl;
    for(auto it:ans){
        vector<int> v = it.second;
        if(v.size()==mxCount){
            for(int num:v){
                cout<<num<<" ";
            }
            break;
        }
    }
    int i =0;
    for(auto it:zero_pos_num){
        if(i<2){
            cout<<it.second[0]<<" ";
        }else{
            break;
        }
        i++;
    }

}
int main(){
    int k;
    cin>>k;
    vector<int> nums(k);
    for( int i=0;i<k;i++ ) cin>>nums[i];
    solve(nums, k); 
 
    return 0;
}