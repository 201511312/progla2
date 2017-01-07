#include<iostream>
#include <stdio.h>

using namespace std;
int  main(){
  int a[5];
  FILE *fp;
  fp = fopen("sample1.txt", "w");
  if(!fp){
  	
  	cout << "cannot open file.\n";
  	
  }
  cout<< "ENTER 5 NUMBERS:\n";
  for(int i=0; i<5; i++){
  	
  	cin >> a[i];
  }
  	fp(myFile);
    myFile = fopen("sample.txt", "a");
  for(int i=4; i>=0; i--){
  	cout << a[i] <<endl;
  }
  

    system ("pause");
	return 0;
}
