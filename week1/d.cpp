#include <iostream>
using namespace std;
int main(){
    int time;
    cin>>time;
    cout<<"Lumberjacks:\n";
    for(int t=0;t<time;t++){
        int arr[10],valid1=1,valid2=1;
        for(int i=0;i<10;i++){
            cin>>arr[i];
        }
        for(int i=0;i<9;i++){
            if(!(arr[i]>=arr[i+1])){
                valid1 = 0;
                break;
            }
        }
        for(int i=0;i<9;i++){
            if(!(arr[i]<=arr[i+1])){
                valid2 = 0;
                break;
            }
        }
        if(valid1==1||valid2==1){
            cout<<"Ordered"<<"\n";
        }else{
            cout<<"Unordered"<<"\n";
        }
    }
    return 0;
}