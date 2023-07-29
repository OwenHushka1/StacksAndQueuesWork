#include "../code_2/EnqueueDequeue.hpp"
#include <iostream>

using namespace std;

/*
 * Purpose: displays a menu with options
 * @param none
 * @return none
 */
void menu(){
	cout << "*----------------------------------------*" << endl;
	cout << "Choose an option:" << endl;
    cout << "1. Enqueue new shows (Add shows to the queue)" << endl;
	cout << "2. Dequeue (Retrieve shows from the queue)" << endl;
	cout << "3. Return the queue size and exit" << endl;
	cout << "*----------------------------------------*" << endl;
}

int main(int argc, char const *argv[])
{
    // DO NOT MODIFY THIS.
    if(argc > 0)
    {
        freopen(argv[1],"r",stdin);
    }

    EnqueueDequeue queue;

    int input;
    int num;
    string line;
    menu();
    getline(cin,line);
    input = stoi(line);


    while(input > 0 && input < 4){

        switch(input){
            case 1:

                cout << "Enter the number of shows to be enqueued:" << endl;
                getline(cin, line);
                num = stoi(line);
                for(int i = 0; i < num; i++){
                    cout << "Show" << (i+1) << ":" << endl;
                    getline(cin, line);
                    queue.enqueue(line);
                }

            break;

            case 2:
            
                cout << "Enter the number of shows to be dequeued:" << endl;
                getline(cin, line);
                num = stoi(line);
                for(int i = 0; i < num; i++){
                    
                    if(queue.isEmpty()){
                        //cout << "No more shows to retrieve from queue" << endl;
                        break;
                    }
                    cout << "Retrieved: " << queue.peek() << endl;
                    queue.dequeue();
                    //num++;
                }
                if(queue.isEmpty())
                    cout << "No more shows to retrieve from queue" << endl;

            break;

            case 3:

                cout << "Number of shows in the queue:" << queue.queueSize() << endl;
                
                return 0;

            break;

            default:
                
                cout << "Enter a valid option (1, 2, 3)" << endl;

            break;

        }
    menu();
    getline(cin,line);
    input = stoi(line);

    }

    
    /* TODO */
    
    return 0;
}
