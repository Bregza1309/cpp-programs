#include"STACK.h"
#include<string>
using namespace STACK;

void platesCabinet(){
    Stack<string> Cabinet;
    string user_c,plate;
    int count{1};
    cout<<"Place your plates one by one \n"
        <<"Enter 'done' when cabinet full :";
    while(true){

        cout<<"Enter plate<"<<count<<"> description :";
        getline(cin,plate);
        if(plate == "done"){
            break;
        }
        Cabinet.push(plate);
    }
    //process the washing of plates
    if(Cabinet.isEmpty()){
        cout<<"Cabinet is clean\n";
        //recursively call the function if Cabinet is empty
        platesCabinet();
    }
    cout<<"Cleaning up Cabinet.................................... \n";
    while(!Cabinet.isEmpty()){
        cout<<"Plate with description <"<<Cabinet.pop()<<"> has been cleaned \n";
    }
    cout<<"...........................................................Cabinet now empty!!!";



}