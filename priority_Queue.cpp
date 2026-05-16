// // //     //Ordered Array (Descending Order)Implement a Priority Queue using an ordered array (descending order).Insert elements so that the array remains sorted in descending order. Deletion always removes the highest priority element (first element).Example application: Airline check-in system where VIP passengers are given higher priority.
    #include <iostream>
    using namespace std;  
    #define MAX 100
    int priorityQueue[MAX];
    int size = 0;
    bool isFull() { return size == MAX; }
    bool isEmpty() { return size == 0; }
    void insert(int x) {
        if (!isFull()) {
            int i;
            for (i = size - 1; (i >= 0 && priorityQueue[i] < x); i--) {
                priorityQueue[i + 1] = priorityQueue[i];
            }
            priorityQueue[i + 1] = x;
            size++;
        } else {
            cout << "Priority Queue Overflow" << endl;
        }
    }
    int deleteHighestPriority() {
        if (!isEmpty()) {
            return priorityQueue[0];
            for (int i = 1; i < size; i++) {
                priorityQueue[i - 1] = priorityQueue[i];
            }
            size--;
        }
        cout << "Priority Queue Underflow" << endl;
        return -1;
    }
    void display() {
        if (isEmpty()) {
            cout << "Priority Queue is empty" << endl;
            return;
        }
        cout << "Priority Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << priorityQueue[i] << " ";
        }
        cout << endl;
    }
    int main() {
        int choice, value;
        do {
            cout << "1. Insert\n2. Delete Highest Priority\n3. Display\n4. Exit\nEnter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Enter value to insert: ";
                    cin >> value;
                    insert(value);
                    break;
                case 2:
                    value = deleteHighestPriority();
                    if (value != -1) {
                        cout << "Deleted highest priority value: " << value << endl;
                    }
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 4);
        return 0;
    }