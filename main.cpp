#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void sort(vector<int> &inputs){
    
}

int main(){
    int val;
    vector<int> input;

    cout << "Enter values seperated by spaces, then type a non-numeric value to enter them: ";
    while(input.size() < 2){
        while(cin >> val){
            if(cin.good())input.push_back(val);
        }
        if(cin.fail()){
            cin.clear();
            cout << "\nList created.";
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cin.clear();
            break;
        }
    }

    cout << "\nYour list before the bubble sort: ";
    for(int i = 0; i < input.size(); i++){
        cout << ((i==input.size()-1)?to_string(input.at(i)):to_string(input.at(i))+", ");
    }
    cout << "\n\nSorting...";
    sort(input);
    cout << "\n\nYour list after the bubble sort: ";
    for(int i = 0; i < input.size(); i++){
        cout << ((i==input.size()-1)?to_string(input.at(i)):to_string(input.at(i))+", ");
    }
    return 0;
}