#include <iostream>
#include <numeric>
using namespace std;

int main(){
	int volume,total,average;
	string students[99];
	int scores[99],failed[99];
	cout << "How many students ? : ";
	cin >> volume;
	
	for(int i=0; i<volume; i++){
		cout << "Name of student: ";
		cin >> students[i];
		cout << "Test Score of student: ";
		cin >> scores[i];
	}
	
	total = accumulate(scores, scores+volume, total);
	average = total/volume;
	cout << "The class average is " << average << "\n";
	
	for(int i = 0; i<volume; i++){
		if(average > scores[i]){
			cout << students[i] << " has failed\n";
		}
		
		}
	
	for(int i = 0; i<volume; i++){
		if(scores[0] < scores[i]){
			scores[0] = scores[i];
		}
}
	cout << students[0] << " achieved the highest score, well done!";
	}
	
