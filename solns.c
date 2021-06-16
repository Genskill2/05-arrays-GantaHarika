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
int maxValue = 0, maxCount = 0;
for (int i = 0; i < n; ++i) {
      int count = 0;
  for (int j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
    if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }
     return maxValue;
 }
	 
//factors function
int factors(int num, int arr[]){
  int i=0,count=0;
 for(count = 2; num > 1; count++) {  
        while(num % count == 0) {
	    arr[i] = count;
		i++;
            num = num / count;  
        }  
    }  
  return arr[i],i;
}
