#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    int times;
    scanf("%d",&times);
    string str;
    getline(cin,str);
    while(times--){
        int finger[10]={0},prev[10]={0},add[10]={0};
        int first = 1;
        /*
        if(first == 1){
            cin.ignore();
            first = 0;
        }
        */
        getline(cin,str);
        for(int i=0;i<str.length();i++){
            if(str[i] == 'c'){
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
                add[7] = 1;
                add[8] = 1;
                add[9] = 1;
            }else if(str[i] == 'd'){
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
                add[7] = 1;
                add[8] = 1;
            }else if(str[i] == 'e'){
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
                add[7] = 1;
            }else if(str[i] == 'f'){
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
            }else if(str[i] == 'g'){
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
            }else if(str[i] == 'a'){
                add[1] = 1;
                add[2] = 1;
            }else if(str[i] == 'b'){
                add[1] = 1;
            }else if(str[i] == 'C'){
                add[2] = 1;
            }else if(str[i] == 'D'){
                add[0] = 1;
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
                add[7] = 1;
                add[8] = 1;
            }else if(str[i] == 'E'){
                add[0] = 1;
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
                add[7] = 1;
            }else if(str[i] == 'F'){
                add[0] = 1;
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
                add[6] = 1;
            }else if(str[i] == 'G'){
                add[0] = 1;
                add[1] = 1;
                add[2] = 1;
                add[3] = 1;
            }else if(str[i] == 'A'){
                add[0] = 1;
                add[1] = 1;
                add[2] = 1;
            }else if(str[i] == 'B'){
                add[0] = 1;
                add[1] = 1;
            }
            for(int i=0;i<10;i++){
                if(prev[i]==0 && add[i]==1){
                    finger[i]++;
                }
            }
            copy(add,add+10,prev);
            fill(add,add+10,0);
        }
        for(int i=0;i<9;i++){
            cout<<finger[i]<<" ";
        }
        cout<<finger[9]<<"\n";
    }
}