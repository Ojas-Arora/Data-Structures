#include <iostream>
#include <stack>
#include <string>
using namespace std;
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    
    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == '(') {
                s.pop();
            }
        } else {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }   
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }   
    return postfix;
}
int main() {
    string infixExpression;
    cout << "Enter an infix expression: ";
    getline(cin, infixExpression);  // Read the entire line
    
    string postfixExpression = infixToPostfix(infixExpression);
    
    cout << "Postfix expression: " << postfixExpression << endl;
    
    return 0;
}
