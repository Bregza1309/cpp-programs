#ifndef STACK_H_
#define STACK_H_
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

namespace STACK{
    using namespace std;
    template<typename B>
    class Stack{
        private:
            list<B> items;
        public:
            void push(B item);
            B  pop();
            const B& peek() const;
            bool isEmpty() const;
            int size() const ;
    };
    // defination of push method
    template<typename B>
    void Stack<B>::push(B item){
        items.insert(items.begin(),item);
        cout<<"Item <"<<item<<">inserted into Stack"<<endl;
    }

    //defination of pop method
    template<typename B>
    B Stack<B>::pop(){
        B popped = items.front();
        items.pop_front();
        return popped;
    }

    //defination of peek method
    template<typename B>
    const B& Stack<B>::peek() const{
        return items.front();
    }

    //defination of isEmpty
    template<typename B>
    bool Stack<B>::isEmpty()const{
        return items.empty();
    }

    //defination of size
    template<typename B>
    int Stack<B>::size() const{
        return (int)items.size();
    }
};
#endif