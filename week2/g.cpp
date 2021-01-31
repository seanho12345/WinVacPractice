#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int time;
    cin>>time;
    while(time--){
        string plate;
        cin>>plate;
        int alpha=0,num=0;
        for(int i=0;i<3;i++){
            int tmp = plate[i] - 'A';
            alpha += tmp * pow(26,2-i);
        }
        for(int i=4;i<8;i++){
            int tmp = plate[i] - '0';
            num += tmp * pow(10,7-i);
        }
        if(abs(alpha-num)<=100){
            cout<<"nice\n";
        }else{
            cout<<"not nice\n";
        }
    }

}