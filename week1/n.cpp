#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int time;
    char trash1,trash2;
    cin>>time;
    for(int t=0;t<time;t++){
        int n,valid=1;
        cin>>trash1>>trash2>>n;
        //cout<<n<<endl;
        //int arr[n][n];
        long int **arr = new long int*[n];
        for(int i=0;i<n;i++){
            arr[i] = new long int[n];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((arr[i][j] != arr[n-i-1][n-j-1]) || arr[i][j]<0){
                    valid = 0;
                    break;
                }
            }
            if(valid == 0){
                break;
            }
        }
        if(valid == 1){
            printf("Test #%d: Symmetric.\n",t+1);
        }else{
            printf("Test #%d: Non-symmetric.\n",t+1);
        }
        
        for(int i=0;i<n;i++){
            delete[] arr[i];
        }
        delete[] arr;
        
    }
    return 0;

}
/*
2
N = 3
5 1 3
2 0 2
3 1 5
N = 3
5 1 3
2 0 2
0 1 5
*/