#include <bits/stdc++.h>
using namespace std;

class compare{
public:
    bool operator()(int a, int b){
        return a > b;
    }
};

int main() {
    stack<string> books;
    books.push("C++");
    books.push("Java");
    books.push("Python");
    books.push("OS");
    books.push("COA");

    while(!books.empty()){
        cout << books.top() << " ";
        books.pop();
    }
    cout << endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    int arr[] = {1, 7238, 36, 47, 327, 23};

    priority_queue<int, vector<int> , compare> heap;
    for(int x: arr){
        heap.push(x);
    }

    while(!heap.empty()){
        cout << heap.top() << " ";
        heap.pop();
    }

    return 0;
}

