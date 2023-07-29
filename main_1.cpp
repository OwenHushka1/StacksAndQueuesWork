#include<iostream>
#include<cmath>
#include<iomanip>
#include "../code_1/MessageDecoder.hpp"

using namespace std;



int main(int argc, char* argv[])
{
    // DO NOT MODIFY THIS.
    if(argc>1)
    {
        freopen(argv[1],"r",stdin);
    }
    string str;
    MessageDecoder decoder;

    cout << "Enter the encoded sentence" << endl;
    cout << "#>";
    getline(cin, str);
    if(str.length() == 0){
      cout << "Nothing to evaluate" ;
    }
    else{
      char arr[str.length()];
      for(int i = 0; i < str.length(); i++){
        arr[i] = str[i];
      }
      decoder.evaluate(arr);
    }


    decoder.~MessageDecoder();



    /* TODO- 
            1. cout #>
            2. get the user input
            3. store them in an array
            4. If the array is empty then print "Nothing to evaluate"
            else call the evaluate function
    */
    
  return 0;
}
