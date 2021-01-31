#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;
int main(){
    while(true){
        string time;
        int hr,min;
        cin>>time;
        if(time.length() == 5){
            hr = (time[0]-'0')*10 + (time[1]-'0');
            min = (time[3]-'0')*10 + (time[4]-'0');
        }else{
            hr = (time[0]-'0');
            min = (time[2]-'0')*10 + (time[3]-'0');
        }
        if(hr == 0 && min == 0){
            break;
        }
        if(hr == 12){
            hr = 0;
        }
        double hrangle,minangle;
        hrangle = hr*30 + min * 0.5;
        minangle = min *6;
        double ans = abs(hrangle - minangle);
        if(ans > 180){
            ans = 360 - ans;
        }
        printf("%.3lf\n",ans);
    }    
}