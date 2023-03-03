//#include <iostream>
//#include <string>
//using namespace std;
//
//
///*
//LIFO PLANNING
//
//queue with size
//int count to store size
//BackIndex shows the last index, if empty then backIndex is -1
//
//functions:
//enqueue
//dequeue
//displayqueue
//showsizequeue
//
//*/
//
//struct LIFOQ {
//	string queue[100];
//	int Occupied = 0;
//	int backIndex = -1;
//
//public:
//	LIFOQ() {}
//	
//	void enQueue(string item) {
//		if (backIndex != 100) {
//			backIndex++;
//			Occupied++;
//			queue[backIndex] = item;
//			cout << item << " added to the queue" << endl;
//			return;
//		}
//
//		//if index > 99 (range is from 0 - 99)
//		cout << "Queue overflow!" << endl;
//		return;
//
//	}
//
//	void deQueue() {
//		if (backIndex != -1) {
//			cout << queue[backIndex] << " is removed" << endl;
//			queue[backIndex] = "";
//			backIndex--;
//			Occupied--;
//
//		}
//	}
//
//	void displayQueue() {
//		if (backIndex != -1) {
//			cout << "Displaying Queue: ";
//			for (int i = 0; i <= backIndex; i++) {
//				cout << queue[i] << ",";
//			}
//			cout << endl;
//			return;
//		}
//
//		cout << "Queue is empty" << endl;
//		
//	}
//
//	void displaySize() {
//		cout << "Size of queue is " << Occupied << endl;
//	}
//
//
//};
//
//
//int main() {
//
//	cout << "Last in first out (LIFO aka Stack) queue simulation!" << endl;
//
//	LIFOQ queue1;
//	queue1.enQueue("1");
//	queue1.enQueue("2");
//	queue1.enQueue("3");
//	queue1.displayQueue();
//	queue1.deQueue();
//	queue1.displaySize();
//	queue1.displayQueue();
//	queue1.enQueue("3");
//	queue1.deQueue();
//	queue1.displaySize();
//	queue1.enQueue("2");
//	queue1.displayQueue();
//	queue1.displaySize();
//	queue1.deQueue();
//	queue1.deQueue();
//	queue1.deQueue();
//	queue1.displaySize();
//	queue1.displayQueue();
//
//	return 0;
//}
//
