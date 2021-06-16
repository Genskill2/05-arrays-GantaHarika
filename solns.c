/* Enter your solutions in this file */
#include <stdio.h>
int max(int [],int);
int min(int [],int);
float average(int [],int);
int mode(int [],int);
int factors(int,int[]);

// max function
int max(int arr[], int count){
  int max = arr[0];
  for(int i=1; i<count; i++){
    if(arr[i]> max) {
      max = arr[i];
    }
  }
  return max;
       }
// min function
     int min( int arr[], int count){
  int min = arr[0];
  for(int i=1; i<count; i++){
    if(arr[i]<min) {
      min = arr[i];
    }
  }
  return min;
}
//average function
float average(int arr[], int count){
  float avg,sum = 0.0;
  for(int i=0;i<count;i++){
    sum += arr[i];
  }
  avg = sum/count;
  return avg;
}
// mode function
int mode(int arr[], int n){
int len,counts[len],Max,Mode,max=arr[0];
 for(int i=1; i<n; i++){
    if(arr[i]> max) {
      max = arr[i];
    }
	 len = max+1;
	 for(int i=0;i<len;i++) {
		 counts[i]=0;
	 }
	 for(int j=0;j<n;j++) {
		 counts[arr[j]]++;
	 }
	 Max = counts[0];
	 for(int k=1;k<n;k++) {
		  if(counts[k]> Max) {
                Max = counts[k];
	        Mode = k;
    } 
  }
	 return Mode;
 }
	 
//factors function
int factors(int num, int arr[]){
  int isPrime,count=0;
for (int i=2;i<=num;i++) {
     	if(num%i == 0){
   			isPrime = 1;
			for (int j=2;j<=i/2;j++) {
				if(i % j == 0) {
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
			   arr[count] = i;
        count++;
			}	          	
		}
   }
  return arr[count],count;
}
