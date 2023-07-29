#include "EnqueueDequeue.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

EnqueueDequeue::EnqueueDequeue(){
	/* Already implemented, don't change */
    queueFront = -1;
	queueEnd = -1;
}

bool EnqueueDequeue::isEmpty(){
	//TODO
	// if(queue[queueFront] == NULL){
	// 	return true;
	// }
	//return (!queueFront || !queueEnd);
	if(counter == 0)
		return true;
	return false;

}

bool EnqueueDequeue::isFull(){
	//TODO
	if(counter == SIZE){
		return true;
	}
    return false;
}

void EnqueueDequeue::enqueue(std::string show){
	//TODO
    if(!isFull()){
		if(isEmpty()){
			queueFront = 0;
		}
		counter++;
		queueEnd = (queueEnd+1)%SIZE;
		queue[queueEnd] = show;

		return;
	}
	cout << "Queue full, cannot add a new show" << endl;
	

}


void EnqueueDequeue::dequeue(){
	//TODO
    if(!isEmpty()){
		
		if(queueEnd == queueFront){
			queue[queueFront] = "";
			queueFront = -1;
			queueEnd = -1;
			counter = 0;
			
		}
		else{
			queue[queueFront] = "";
			queueFront = (queueFront +1)%SIZE;
			counter--;
			
		}
		return;

	}
	cout << "Queue empty, cannot dequeue show" << endl;

}


string EnqueueDequeue::peek(){
	//TODO
	if(!isEmpty()){
		return queue[queueFront];
	}
    cout << "Queue empty, cannot peek" << endl;
	return "";
}

int EnqueueDequeue::queueSize(){
    //TODO
	return counter;

}