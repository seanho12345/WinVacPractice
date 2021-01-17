#include <iostream>
using namespace std;
int main(){
    while(true){
        int count1,count2;
        cin>>count1>>count2;
        if(count1==0 && count2 ==0){
            break;
        }
        int a[count1],b[count2],anum=0,bnum=0;
        for(int i=0;i<count1;i++){
            int input;
            cin>>input;
            if(i>0 && a[anum-1]!=input){
                a[anum] = input;
                anum++;
            }else if(i==0){
                a[0] = input;
                anum++;
            }
        }
        for(int i=0;i<count2;i++){
            int input;
            cin>>input;
            if(i>0 && b[bnum-1]!=input){
                b[bnum] = input;
                bnum++;
            }else if(i==0){
                b[0] = input;
                bnum++;
            }
        }
        /*
        for(int i=0;i<anum;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<bnum;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
        cout<<anum<<" "<<bnum<<"\n";
        */
        int anumi=anum,bnumj=bnum;
        for(int i=0;i<anumi;i++){
            for(int j=0;j<bnumj;j++){
                //cout<<a[i]<<" "<<b[j]<<"\n";
                if(a[i]==b[j]){
                    anum--;
                    bnum--;
                    break;
                }
            }
        }
        //cout<<anum<<" "<<bnum<<"\n";
        if(anum<bnum){
            cout<<anum<<"\n";
        }else if(anum >= bnum){
            cout<<bnum<<"\n";
        }
    }
    return 0;
}
/*
1 1
1000
1000
3 4
1 3 5
2 4 6 8
10 9
1 1 2 3 5 7 8 8 9 15
2 2 2 3 4 6 10 11 11
0 0
*/
