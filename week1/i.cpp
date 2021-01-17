#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int time;
    cin>>time;
    for(int t=0;t<time;t++){
        int arr[4];
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
        sort(arr,arr+4);
        if(arr[0]==arr[3]){
            cout<<"square"<<"\n";
        }else if((arr[0]==arr[1])&&(arr[2]==arr[3])){
            cout<<"rectangle"<<"\n";
        }else if(arr[0]+arr[1]+arr[2]>arr[3]){
            cout<<"quadrangle"<<"\n";
        }else{
            cout<<"banana"<<"\n";
        }
    }
    return 0;
}