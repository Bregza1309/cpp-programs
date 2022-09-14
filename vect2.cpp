#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct Review{
    string title;
    int rating;
};
bool FillReview(Review & rv);
void showReview(const Review & rv);

//main executable function
int main(){
    vector<Review> books;
    Review temp;

    //get book title and rating
    while(FillReview(temp)){
        books.push_back(temp);
    }
    int num = (int)books.size();
    if (num > 0){
        cout<<"Thank you .You entered the following :\n"
            <<"Rating\tBook\n";
        
        //use iterator to show  all books and ratings
        for(auto it = books.begin() ; it != books.end() ; it++){
            showReview(*it);
        }

        //using for_each to show books
        cout<<"using for_each to show books"<<endl;
        for_each(books.begin(),books.end() ,showReview);

    }
}
//function definations
bool FillReview(Review & rv){
    cout<<"Enter book title (quit to Quit) : ";
    getline(cin,rv.title);
    if(rv.title == "quit"){
        return false;
    }
    cout<<"Enter book rating :";
    cin>>rv.rating;
    if(!cin){
        return false;
    }
    // get rid of rest of input line
    while(cin.get() != '\n'){
        continue;
    }
    return true;   
}

void showReview(const Review & rv){
    cout<<rv.rating <<"\t"<<rv.title<<endl;
}
