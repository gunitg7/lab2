#include <stdio.h>
#include <stdlib.h>
/*How program works:
 *User inputs integer values
  *Program loops and keeps recieving values until user inputs negative integer
  *Program finds average of integer values (except negative integer)
  *Program finds all numbers greater than original average.
  * Program finds average of above-average numbers.
  *Program returns above-average average
  */
 int main(void){
	
	//declare   variables
	int values[1000];//list of values inputted
	int  countval, countabval;//countval = counts # of values, countabval = count # above average values
	int a, totval, abval;//a = input value, totval = total  of values, abval = total of above average values
	float avg, abavg;//avg = average of all values, abavg= average of values > average
	
	
	printf("Please input a filename.");
	
	
	countval = 0;
	char myfile[] = scanf("%s", myfile);
	FILE *myfp;
	myfp= fopen("\myfile", "r");
	
	while(a >=0){ //while loop recieves integer values
	
		a = fscanf(myfp);
	
		if(a>=0){
			
			values[countval] = a;
			countval++;
		}
		else{
		
			break;
		}
		
	}
	fclose(myfp);
	for(int i = 0; i<countval; i ++){//this for loop gets the overall total for the average
		totval += values[i];
	}
	avg = totval / countval;
	
	for(int j=0; j<countval; j++){//this for loop gets the above average total for the above average average.
		
		if(values[j] >= avg){
		  abval += values[i];
			countabval++;
		}
	}
	abavg = abval/countabval;
	
	printf("%f", abavg);
	
	return 0;
	
}
