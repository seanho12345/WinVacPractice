#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int times;
    cin>>times;
    while(times--){
        int n,rear = 1,iszero = 1,isloop = 1;
        cin>>n;
        int arr[1000][n];
        for(int i=0;i<n;i++){
            cin>>arr[0][i];
        }
        for(int i=1;i<1000;i++){
            iszero = 1;
            isloop = 0;
            int tmp = arr[i-1][0];
            for(int j=0;j<n-1;j++){
                arr[i][j] = abs(arr[i-1][j+1] - arr[i-1][j]);
            }
            arr[i][n-1] = abs(arr[i-1][n-1] - tmp);
            /*
            for(int j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
            */
            for(int j=0;j<n;j++){
                if(arr[i][j] != 0){
                    iszero = 0;
                    break;
                }
            }
            for(int j=1;j<i && iszero == 0; j++){
                isloop = 1;
                for(int k=0;k<n;k++){
                    if(arr[j][k] != arr[i][k]){
                        isloop = 0;
                        break;
                    }
                }
                //cout<<isloop<<" testing\n";
                if(isloop == 1){
                    break;
                }
            }
            if(isloop == 1){
                cout<<"LOOP\n";
                break;
            }else if(iszero == 1){
                cout<<"ZERO\n";
                break;
            }
        }
    }
}