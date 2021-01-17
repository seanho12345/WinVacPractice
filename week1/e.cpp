#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    for(int t=0;t<time;t++){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int high=0,low=0;
        for(int i=1;i<size;i++){
            if(arr[i]>arr[i-1]){
                high++;
            }else if(arr[i]<arr[i-1]){
                low++;
            }
        }
        cout<<"Case "<<t+1<<": "<<high<<" "<<low<<"\n";
    }
}