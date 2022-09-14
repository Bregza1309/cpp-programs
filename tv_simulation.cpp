#include"tv_methods.h"

using namespace std;

int main(){
    Tv s42;
    cout<<"Initial settings dor s42 TV:"<<endl;
    s42.settings();
    s42.onOff();
    s42.chanup();
    cout<<"\nAdjusted settings for s42 TV"<<endl;
    s42.settings();

    Remote black;
    black.set_chan(s42,5);
    black.volup(s42);
    black.volup(s42);
    cout<<"s42 settings after using the remote:\n";
    s42.settings();

}