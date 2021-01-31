#include <iostream>
using namespace std;
int main(){
    int n,set=1;
    while(true){
        
        cin>>n;
        if(n == 0){
            break;
        }
        int arr[n],total=0,target;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total += arr[i];
        }
        target = total/n;
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>target){
                ans += arr[i] - target;
            }
        }
        cout<<"Set #"<<set<<"\n";
        cout<<"The minimum number of moves is "<<ans<<"."<<"\n\n";
        set++;
    }
}