#include<iostream>
#include<cstring>
using namespace std;
int main(){
   int count=0;
   char binaryString[10];
   strcpy(binaryString,"10100100101");
	
	for(int i=0;i<10;i++){
	if(binaryString[i]=='1'){
	count = count + 1;	
	 }
	}	
	cout<<count<<endl;		
}
