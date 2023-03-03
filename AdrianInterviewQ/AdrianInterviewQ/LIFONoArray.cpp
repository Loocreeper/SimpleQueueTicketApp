//#include <iostream>
//#include <string>
//using namespace std;
//
//
///*
//LIFO PLANNING Without Array using linked list
//
//int count to store size
//
//functions:
//enqueue
//dequeue
//displayqueue
//showsizequeue
//
//*/
//
//struct LIFOQnode {
//	string id;
//	LIFOQnode* next;
//	LIFOQnode* prev;
//};
//
//class LIFOQ {
//
//	int Occupied = 0;
//	LIFOQnode* front, *back;
//
//public:
//	LIFOQ() {
//		//assign inital value
//		front = back = NULL;
//	}
//
//	void enQueue(string item) {
//
//		LIFOQnode* newnode = new LIFOQnode;
//		newnode->id = item;
//		newnode->next = NULL;
//		newnode->prev = NULL;
//
//		if (front == NULL) {
//
//			//first item
//			front = back = newnode;
//
//		}
//		else {
//			
//			//to put at the back, the newnode need to be the next node after the 'back'
//			//then the prev of the newnode will be the 'back'
//			//then only the newnode become the new 'back'
//			
//			back->next = newnode; //pointer of back
//			newnode->prev = back; //pointer of newnode
//			back = newnode;
//		}
//
//		Occupied++;
//		cout << item << " added to the queue" << endl;
//		return;
//
//	}
//
//	void deQueue() {
//		if (front == NULL) {
//
//			cout << "The queue is empty!" << endl;
//
//		}
//
//		else if (front == back) {
//			cout << front->id << " is removed" << endl;
//			front = back = NULL;
//
//		}
//		else {
//
//			LIFOQnode* current = back;
//			back = current->prev;
//			back->next = NULL;
//			cout << current->id << " is removed" << endl;
//			Occupied--;
//			delete current;
//
//		}
//	}
//
//	void displayQueue() {
//
//		if (Occupied != 0) {
//			LIFOQnode* current = front;
//			cout << "Displaying Queue: ";
//			while (current != NULL) {
//
//				cout << current->id << ",";
//				current = current->next;
//			}
//
//			cout <<endl << "End of queue!" << endl;
//			return;
//		}
//
//		cout << "Queue is empty!" << endl;
//		return;
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
