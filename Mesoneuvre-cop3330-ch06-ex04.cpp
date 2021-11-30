/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Dynie Mesoneuvre
 */

#include <iostream>
#include <vector>
using namespace std;

//creating class for the vector of names and values
class Name_value {
    public:
        //initializing variables to be used in class
        string name;
        int value;

};

int main() {

    //creating class object
    Name_value input;

    //creating class vector
    vector<Name_value> pairs;

    //initializing variables index for size of vector and duplicate to see repeated input
    int duplicate = 0;
    int index = 0;

    //asking for input
    cout << "Input a name and a value. Type \"NoName 0\". to stop the program.\n";

    //taking input and setting it to object class input.name and input.value
    cin >> input.name;
    cin >> input.value;

    //incrementing the vector
    pairs.resize(index + 1);
    pairs[index] = input;
    index++;

    //using a while loop to check for NoName 0 input
    while(!((input.name == "NoName") && (input.value == 0))) {

        cout << "\nInput a name and a value. Type \"NoName 0\". to stop the program. \n";

        cin >> input.name;
        cin >> input.value;


        //using for loop to go through the pairs in vector
        for(int i = 0; i < index; i++) {

            //if statement determines if there are any duplicates
            if((input.name == pairs[i].name) && !((input.name == "NoName") && (input.value == 0))) {


                cout << "Invalid Input";
                duplicate = 1;
                return 0;
            }
        }

        //if there are no duplicates, the vectors resizes again to make more room
        if(duplicate == 0) {
            pairs.resize(index + 1);
            pairs[index] = input;
            index++;
        }


    }

    return 0;
}
