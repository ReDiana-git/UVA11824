#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void camping(vector<int> vec){

    sort(vec.begin(),vec.end(),greater<int>());
    int total = 0;
    for(int i = 0; i < vec.size(); i++){
        total += pow(vec[i], i+1);
        if(total > 5000000){
            break;
        }
    }
    if(total > 5000000)
        cout << "Too expensive" << endl;
    else
        cout << total * 2 << endl;
}

int main() {
    vector<int> vec;
    int firstInput;
    cin >> firstInput;
    for(int i = 0; i < firstInput; i++){

        int input;

        while (cin >> input){
            if(input)
                vec.push_back(input);
            else{
                camping(vec);
                vec.clear();
                break;
            }
        }
    }

    return 0;
}
