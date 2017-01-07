#include<iostream>
#include <stdio.h>
 main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i, sum=0;
    
    int numberArray[5];

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 5; i++){
    	
        printf( """%d\n", numberArray[i]);
        
    }
	   
	  for (i = 0; i < 5; i++){
    	
        sum+=numberArray[i];
        
    }
    fclose(myFile);
    myFile = fopen("sample.txt", "a");
     for (i = 0; i < 5; i++){
    	 fprintf(myFile, "%d", numberArray[i]);
		sum=4;
        printf( """%d\n", sum+=numberArray[i]);
        
    }
    
}
