#include <iostream>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cout<<"Enter value of T"<<endl;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
            cout<<"Enter value of Q"<<endl;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
                cout<<"Enter value of QueryType"<<endl;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cout<<"Enter value of a"<<endl;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

void MyStack ::push(int x) {
    StackNode* temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

int MyStack ::pop() {
    if (top == NULL) return -1;
    int res = top->data;
    StackNode* temp = top;
    top = top->next;
    delete(temp);
    return res;
}
