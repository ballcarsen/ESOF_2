#include "MathSoftware.h"

MTool::MTool(){}

/*
 * copy subarray of arr into sub
 *
 * param:arr - array to be copied
 * param:sub - target array
 * param:low - beginning address of subarray in arr
 * param:high - last address (exclusive) of subarray in arr
 */
void MTool::subarray(int * arr, int * sub, int high, int low){
  if(low <= high){
      int len = high - low;
      for(int i=0; i < len; i++){
        sub[i] = arr[low + i];
      }
  }
}


/*
* merge two subarrays
*
* param:sub1 - one of the subarrays
* param:sub1_size - size of the sub1 array
* param:sub2 - one of the subarrays
* param:sub2_size - size of the sub1 array
* param:retarr - array to hold the merge array
*/
void MTool::merge(int * sub1, int sub1_size,
           int * sub2, int sub2_size,
           int * retarr)
{
  int sub1_index=0, sub2_index=0;
  while(sub1_index < sub1_size ||
        sub2_index < sub2_size)
  {
    if(sub1_index >= sub1_size){
      retarr[sub1_index+sub2_index] = sub2[sub2_index];
      sub2_index++;
    } else if (sub2_index >= sub2_size) {
      retarr[sub1_index+sub2_index] = sub1[sub1_index];
      sub1_index++;
    } else if (sub1[sub1_index] < sub2[sub2_index]){
      retarr[sub1_index+sub2_index] = sub1[sub1_index];
      sub1_index++;
    } else {
      retarr[sub1_index+sub2_index] = sub2[sub2_index];
      sub2_index++;
    }
  }
}

/* Accepts an int representing the size of the array to be sorted, and the integer array to be sorted
*
* param:arr - array to be sort
* param:high - highest value of the subarray in the current step
*/
void MTool::mathSort(int size, int arr[]){
 if(size != 1){
   int low = 0;
   int mid = size/2;
   int high = size;

   int sub1_size=mid-low;
   int sub2_size=high-mid;
   int * sub1 = new int[sub1_size];
   int * sub2 = new int[sub2_size];
   subarray(arr, sub1, mid, low);
   subarray(arr, sub2, high, mid);
   mathSort(sub1_size, sub1);
   mathSort(sub2_size, sub2);
   merge(sub1, sub1_size, sub2, sub2_size, arr );
   delete[] sub1;
   delete[] sub2;
 }
}

Mathematica::Mathematica(){}

/*Accepts an int representing the size of the array to be sorted, and the integer array to be sorted
 * param:arr - array to be sorted
 * param:size - size of array to be sorted
 * Uses insertion sort to sort array
 */

void Mathematica::mathSort(int size, int arr[])
{
  for(int i=0; i<size; i++){
    int j=i;
    while(j>0 && arr[j]<arr[j-1]){
      int temp=arr[j-1];
      arr[j-1]=arr[j];
      arr[j]=temp;
      j--;
    }
  }
}

MyMath::MyMath(){}
/*Accepts an int representing the size of the array to be sorted, and the integer array to be sorted
 * param:arr - array to be sorted
 * param:size - size of array to be sorted
 * Uses bubble sort to sort array
 */

void MyMath::mathSort(int size, int arr[])
{
  bool sorted = false;
  while (!sorted) {
    sorted = true;
    for (int index = 0; index < size - 1; index++) {
      if (arr[index + 1] < arr[index]) {
        sorted = false;
        int temp1 = arr[index];
        int temp2 = arr[index + 1];
        arr[index] = temp2;
        arr[index + 1] = temp1;
      }
    }
  }
}
