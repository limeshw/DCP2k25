#include<iostream>
#include<stack>
using namespace std;

void sortInAsc(stack<int>&st,int ele){
    if(st.size() == 0 || st.top() <= ele){
        st.push(ele);
        return;
    }

    int x = st.top();
    st.pop();
    sortInAsc(st,ele);;

    st.push(x);

}

void sortStk(stack<int>&st){
    if(st.size() == 0) return;

    int x = st.top();
    st.pop();
    sortStk(st);

    sortInAsc(st,x);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    stack<int>st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    printStack(st);

    sortStk(st);

    printStack(st);

}
