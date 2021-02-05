#include <iostream>
#include <algorithm>
using namespace std;
struct square{
    int w;
    int h;
};
bool sortsqr(square &sqr1,square &sqr2){
    if(sqr1.w != sqr2.w){
        return sqr1.w > sqr2.w;
    }else{
        return sqr1.h > sqr2.h;
    }
}
int main(){
    int w,h;
    square squares[6];
    while(cin>>squares[0].w>>squares[0].h){
        if(squares[0].w < squares[0].h){
            swap(squares[0].w,squares[0].h);
        }
        for(int i = 1 ; i <= 5;++i){
            cin >> squares[i].w >> squares[i].h;
            if(squares[i].w < squares[i].h){
                swap(squares[i].w, squares[i].h);
            }
        }
        sort(squares,squares+6,sortsqr);
        if(squares[0].w != squares[1].w || squares[0].h != squares[1].h ||
           squares[2].w != squares[3].w || squares[2].h != squares[3].h ||
           squares[4].w != squares[5].w || squares[4].h != squares[5].h
           )
        {
            printf("IMPOSSIBLE\n");
        }
        else if(squares[0].w != squares[2].w || squares[0].h != squares[4].w || squares[2].h != squares[4].h)
        {
            printf("IMPOSSIBLE\n");
        }
        else
        {
            printf("POSSIBLE\n");
        }
    }
}