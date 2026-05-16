
// // // //     // palindrome by stack
    #include <iostream>
    #include <string>
    using namespace std;
    #define MAX 100
    class Stack {
        int top;
        char arr[MAX];
    public:
        Stack() { top = -1; }
        bool isFull() { return top == MAX - 1; }
        bool isEmpty() { return top == -1; }
        void push(char x) {
            if (!isFull()) arr[++top] = x;
        }
        char pop() {
            if (!isEmpty()) return arr[top--];
            return '\0';
        }
    };
    bool isPalindrome(string str) {
        Stack s;
        for (char ch : str) {
            s.push(ch);
        }
        for (char ch : str) {
            if (ch != s.pop()) {
                return false;
            }
        }
        return true;
    }
    int main() {
        string str;
        cout << "Enter a string: ";
        getline(cin, str);
        if (isPalindrome(str)) {
            cout << str << " is a palindrome." << endl;
        } else {
            cout << str << " is not a palindrome." << endl;
        }
        return 0;
    }
    
