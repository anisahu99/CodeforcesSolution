# include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int solve(const vector<int> &gas_station_stops, const int &n, const int &x){

    int initial_stop = 0;
    // x -> last_stop
    int max_distance_to_gas_station = 0;
    for(int i=0;i<n;i++){
        if(i==0){
            max_distance_to_gas_station = max( max_distance_to_gas_station, gas_station_stops[i] - initial_stop );
        }else{
            max_distance_to_gas_station = max( max_distance_to_gas_station, gas_station_stops[i] - gas_station_stops[i-1] );
        }
    }

    // int min_volume_gas_tank = max_distance_to_gas_station ;
    int min_volume_gas_tank ;

    int required_volume_last_gas_station_to_x =  x - gas_station_stops[n-1] ;
    int required_volume_to_come_back_last_gas_station =  x - gas_station_stops[n-1] ;
    int remaining_volume_after_reaching_x = max_distance_to_gas_station - required_volume_last_gas_station_to_x ;

    if( remaining_volume_after_reaching_x < required_volume_to_come_back_last_gas_station ){
        min_volume_gas_tank = max_distance_to_gas_station + ( required_volume_to_come_back_last_gas_station - remaining_volume_after_reaching_x ) ;
    }else{
        min_volume_gas_tank = max_distance_to_gas_station ;
    }

    return min_volume_gas_tank;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n >>x;
        vector<int>gas_station_stops(n);
        for(int i=0;i<n;i++){
            cin>>gas_station_stops[i];
        }
        cout<<solve(gas_station_stops, n, x)<<endl;
    }
 
    return 0;
}