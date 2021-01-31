#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    long long int n,m;
    while(cin>>n>>m){
        int valid = 1;
        if(n<2 || m<2){
            cout<<"Boring!\n";
            valid = 0;
            continue;
        }
        vector<long long int> vec;
        
        while(n%m == 0 && valid == 1){
            vec.push_back(n);
            n/=m;
        }
        if(n!=1 || vec.empty()){
            cout<<"Boring!\n";
        }else{
            for(int i=0;i<vec.size();i++){
                cout<<vec[i]<<" ";
            }
            cout<<"1\n";
        }
    }
}