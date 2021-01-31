#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        int length;
        cin>>length;
        int arr[length];
        for(int i=0;i<length;i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=0;i<length;i++){
            for(int j=0;j<length-1;j++){
                if(arr[j]>arr[j+1]){
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                    ans++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<ans<<" swaps.\n";
    }
}