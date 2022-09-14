#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>

using namespace std;

char toLower(char ch){return tolower(ch);}
string& ToLower(string& s);

ostream_iterator<string,char> display(cout," ");

int main(){
    vector<string> words;
    cout<<"Enter words (enter quit to quit):\n";
    string input;
    while(cin>>input && input != "quit"){
        words.push_back(input);
    }
    cout<<"You entered the following words: ";
    copy(words.begin(),words.end(),display);
    cout<<endl;
    
    //place words in set ,converting to lowercase
    set<string> wordset;
    transform(words.begin(),words.end(),insert_iterator<set<string> > (wordset,wordset.begin()),ToLower);
    cout<<"Alphabetic list of words :";
    copy(wordset.begin(),wordset.end(),display);
    cout<<endl;

    //place word and frequency 
    map<string,int> wordmap;
    for(auto si = wordset.begin();si != wordset.end();si++){
        wordmap[*si] = count(words.begin(),words.end(),*si);    
    }   

    //display map contents
    cout<<"\nWord Frequency:\n";
    for(auto si = wordset.begin();si != wordset.end();si++){
        cout<<*si <<" : "<<wordmap[*si] <<endl;
    }
}

// function definations
string& ToLower(string& s){
    transform(s.begin(),s.end(),s.begin(),toLower);
    return s;
}
