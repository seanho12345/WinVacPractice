#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        int num,add=0;
        vector<int> vec;
        cin>>num;
        for(int i=2;i<num/2;i++){
            if(find(vec.begin(),vec.end(),i) != vec.end()){
                continue;
            }
            if(num%i == 0){
                if(i == num/i){
                    add += i;
                    vec.push_back(i);
                }else{
                    add += i + num/i;
                    vec.push_back(i);
                    vec.push_back(num/i);
                }
            }
        }
        add++;
        //cout<<add<<"\n";
        if(add == num){
            cout<<"perfect\n";
        }else if(add > num){
            cout<<"abundant\n";
        }else{
            cout<<"deficient\n";
        }
    }
}