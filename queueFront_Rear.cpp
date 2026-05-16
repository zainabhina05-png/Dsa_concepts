// // // //     //code for queu input array and then display front n rear
// // // // //code for queu input array and then display front n rear
 #include <iostream>
    using namespace std;
    #define MAX 100
    class Queue {
        int front, rear;
        int arr[MAX];
    public:
        Queue() { front = -1; rear = -1; }
        bool isFull() { return rear == MAX - 1; }
        bool isEmpty() { return front == -1 || front > rear; }
        void enqueue(int x) {
            if (!isFull()) {
                if (front == -1) front = 0;
                arr[++rear] = x;
            }
        }
        int dequeue() {
            if (!isEmpty()) return arr[front++];
            return -1;
        }
        int getFront() {
            if (!isEmpty()) return arr[front];
            return -1;
        }
        int getRear() {
            if (!isEmpty()) return arr[rear];
            return -1;
        }
    };
    int main() {
        Queue q;
        int n, value;
        cout << "Enter number of elements to enqueue: ";
        cin >> n;
        cout << "Enter elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> value;
            q.enqueue(value);
        }
        cout << "Front element: " << q.getFront() << endl;
        cout << "Rear element: " << q.getRear() << endl;
        return 0;
    }