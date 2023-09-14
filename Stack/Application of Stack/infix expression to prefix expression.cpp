#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to determine the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(const std::string& infix) {
    string postfix;
    stack<char> operators;

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.empty() && operators.top() != '(') {
                postfix += operators.top();
                operators.pop();
            }
            operators.pop(); // Remove the '('
        } else if (isOperator(c)) {
            while (!operators.empty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty()) {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

// Function to reverse a string
string reverseString(const std::string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to convert infix expression to prefix expression
string infixToPrefix(const std::string& infix) {
    string postfix = infixToPostfix(infix);
    string prefix = reverseString(postfix);
    return prefix;
}

int main() {
    string infixExpression;

    cout << "Enter an infix expression: ";
    cin >> infixExpression;

    string prefixExpression = infixToPrefix(infixExpression);

    cout << "Prefix expression: " << prefixExpression << std::endl;

    return 0;
}
