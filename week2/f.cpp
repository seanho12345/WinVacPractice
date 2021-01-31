#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int time;
    cin>>time;
    while(time--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans = (arr[n-1]-arr[0])*2;
        cout<<ans<<"\n";
    }
}