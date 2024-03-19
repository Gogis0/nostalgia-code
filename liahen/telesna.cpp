//2013-12-21 15:34:18
#include<iostream>
#include<vector>
using namespace std;

void quicksort(int array[], int left_begin, int right_begin)
{
    int pivot = array[(left_begin + right_begin) / 2];
    int left_index, right_index, pom;
    left_index = left_begin;
    right_index = right_begin;
    do {
        while (array[left_index] < pivot && left_index < right_begin) left_index++;
        while (array[right_index] > pivot && right_index > left_begin) right_index--;
 
        if (left_index <= right_index) {
            pom = array[left_index];
            array[left_index++] = array[right_index];
            array[right_index--] = pom;
        }
    } while (left_index < right_index);
 
    if (right_index > left_begin) quicksort(array, left_begin, right_index);
    if (left_index < right_begin) quicksort(array, left_index, right_begin);
}

int main() {
	int n,arr[10000];
	cin >> n; for (int i=0; i<n*2; ++i) cin >> arr[i];
	quicksort(arr,0,n*2-1);
	for (int i=n*2-1; i>=0; --i) cout << arr[i] << endl;

  return 0;
}
