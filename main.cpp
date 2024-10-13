#include <iostream>
#include <limits>
#include <vector>

using namespace std;
int steps = 0;

void sort(vector<int> &inputs){
    bool sorted = false;
    int swaps;
    for (int x = 0; x < inputs.size()-1; x++){
        swaps = 0;
        for (int y = 0; y < inputs.size()-x-1; y++){
            steps++;
            if(inputs.at(y) > inputs.at(y+1)){
                steps++;
                swaps++;
                swap(inputs.at(y),inputs.at(y+1));
            }
        }
        if(swaps == 0)return;
        cout << "\n\nYour list after " << x+1 << " iteration(s): ";
        for(int i = 0; i < inputs.size(); i++){
            cout << ((i==inputs.size()-1)?to_string(inputs.at(i)):to_string(inputs.at(i))+", ");
        }
    }
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
    cout << "\nFinished sorting in " << steps << " steps.";

    cout << "\n\nYour list after the bubble sort: ";
    for(int i = 0; i < input.size(); i++){
        cout << ((i==input.size()-1)?to_string(input.at(i)):to_string(input.at(i))+", ");
    }
    return 0;
}