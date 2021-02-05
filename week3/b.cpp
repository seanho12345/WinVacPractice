#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int isprime = 1;
        int isemirp = 0;
        int arr[6];
        for(int i=2;i<n;i++){
            if (n % i == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            isemirp = 1;
            int tmp = n,rear = 0;
            while(tmp != 0){
                arr[rear] = tmp % 10;
                tmp/=10;
                rear++;
            }
            int revn = 0,k = rear-1;
            for(int i=0;i<rear;i++){
                revn += arr[i]*pow(10,k);
                k--;
            }
            if(revn == n){
                isemirp = 0;
            }
            //cout<<revn<<"\n";
            for(int i=2;i<revn && isemirp == 1;i++){
                if (revn % i == 0){
                    isemirp = 0;
                    break;
                }
            }
        }
        cout<<n;
        if(isemirp == 1){
            cout<<" is emirp.\n";
        }else if(isprime == 1){
            cout<<" is prime.\n";
        }else{
            cout<<" is not prime.\n";
        }
    }
}