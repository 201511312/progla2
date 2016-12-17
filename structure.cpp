#include <iostream>
using namespace std;
struct Person{
	
	int toes;
	int knees;
	int shoulder;
	int head;
}; 

int main(){	
	Person person[4];
	int i;
	cout<<"Enter TOES, KNEES , SHOULDER, HEAD"<<endl;
	for(i=0;i<4;i++){
	cout << "Person's toes:" << endl;
	 cin >> person[i].toes;
	 cout << "Person's knees:" << endl;
	 cin >> person[i].knees;
	 cout << "Person's shoulder:" << endl;
	 cin >> person[i].shoulder;
	 cout << "Person's head:" << endl;
	 cin >> person[i].head;
	};

	 for(i=0;i<4;i++){
	 cout <<"toes:" << person[i].toes << endl;
	 cout <<"knees:" << person[i].knees << endl;
	 cout <<"shoulder:" << person[i].shoulder << endl;
	 cout << "head:" <<person[i].head << endl;
	 };
	 return 0;
}
