#include <iostream>
#include <cstdlib>
#include <iostream>
#include "MessageDecoder.hpp"

using namespace std;
# define SIZE 50

MessageDecoder::MessageDecoder()
{
	/*
    DO NOT MODIFY THIS
    This constructor is already complete. 
    */
	head = NULL;
}

MessageDecoder::~MessageDecoder()
{
	// TODO
	while(!isEmpty())
        pop();
		head = NULL;
}

bool MessageDecoder::isEmpty()
{
	/* finished. do not touch. */
    return (head == NULL);
}

void MessageDecoder::push(char ch)
{
    Parser* nn = new Parser;
    nn->ch = ch;
    nn->next = nullptr;
    nn->next = head;
    head = nn;

	// TODO
}

void MessageDecoder::pop()
{   
	if(!isEmpty())
    {
        Parser* temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        cout<<"Stack empty, cannot pop an item."<<endl;
    }
}

Parser* MessageDecoder::peek()
{
	// TODO
	if(!isEmpty())
        return head;
    else{
        cout<<"Empty stack. can not peek"<<endl;
    }
	return NULL;
}

void MessageDecoder::evaluate(char str[])
{
	// TODO
	bool firstBracket = false;
	bool secondBracket = false;
	int size = 0;
	int k = 0;



	while(str[size] != NULL){
		size++;
	}
	char newArr[size];
	for(int i = 0; i < size; i++){
		push(str[i]);
	}
	while(!isEmpty()){
		if(firstBracket != true){
			if(peek()->ch == '}'){
				firstBracket = true;
			}
			else{
				pop();
			}
		}

		if(firstBracket == true){
			if(peek()->ch == '{'){
				for(int i = 1; i < k; i++){
					cout << newArr[i];
				}
		
				return;
			}
			newArr[k] = peek()->ch;
			pop();
			k++;
		}
	}

cout << "No secret message" << endl;

}
