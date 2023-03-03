//#include <iostream>
//#include <string>
//using namespace std;
//
//
///*
//FIFO PLANNING
//
//queue with size
//int count to store size
//Front shows the first index. 
//BackIndex shows the last index, 
//if empty then backIndex == frontindex != 0
//
//
//functions:
//enqueue
//dequeue
//displayqueue
//showsizequeue
//
//*/
//
//struct FIFOQ {
//	string queue[100];
//	int Occupied = 0;
//	int backIndex = -1;
//	int frontIndex = -1;
//
//public:
//	FIFOQ() {}
//	
//	void enQueue(string item) {
//		if (backIndex != 100) {
//
//			if (frontIndex == -1) {
//				frontIndex = 0;
//			}
//
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
//
//		//if only left one item
//		if (Occupied == 1) {
//			cout << queue[frontIndex] << " is removed" << endl;
//			queue[frontIndex] = "";
//			backIndex = -1;
//			frontIndex = -1;
//			Occupied--;
//			return;
//		}
//
//		//if more than one
//		cout << queue[frontIndex] << " is removed" << endl;
//		queue[frontIndex] = "";
//		frontIndex++;
//		Occupied--;
//		return;
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
//	cout << "First in first out (FIFO aka Queue) queue simulation!" << endl;
//
//	FIFOQ queue1;
//	queue1.enQueue("1");
//	queue1.enQueue("2");
//	queue1.enQueue("3");
//	queue1.displaySize();
//	queue1.displayQueue();
//	queue1.deQueue();
//	queue1.displaySize();
//	queue1.displayQueue();
//	queue1.enQueue("3");
//	queue1.deQueue();
//	queue1.displaySize();
//	queue1.displayQueue();
//	queue1.enQueue("2");
//	queue1.displaySize();
//	queue1.displayQueue();
//	queue1.deQueue();
//	queue1.deQueue();
//	queue1.deQueue();
//	queue1.displaySize();
//	queue1.displayQueue();
//
//	queue1.enQueue("1");
//	queue1.enQueue("2");
//	queue1.displaySize();
//	queue1.displayQueue();
//
//	return 0;
//}
//
