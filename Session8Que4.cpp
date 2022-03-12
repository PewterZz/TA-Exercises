#include <iostream>
#include <vector>
using namespace std;

template<class elemType>
void reverseVector(vector<elemType> &list, vector<elemType> &list2){
	list2 = list;
    for(int i = 0; i < 3; i++){
        list2[i] = list[2-i];
    }
}

int main(){

    vector<int> array1;
    vector<int> array2;
	array1.push_back(23);
	array1.push_back(32);
	array1.push_back(89);
	
	reverseVector(array1, array2);
    for(int i = 0; i < 3; i++){
        cout << array2[i] << "\n";
    }
}

