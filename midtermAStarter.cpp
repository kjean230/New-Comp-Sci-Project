// Kerwyn Jean
// April 4, 2024
// c++ code for midterm A

#include <iostream>
using namespace std;

// Function to swap two ints using pointers
// @param pointer to an int
// @param pointer to an int
void swap(int *a, int *b) {
    // TODO: Add code that swaps two integers using pointers

	int change = *a;
	*a = *b;
	*b = change;
}
// Function to reverse array
void reverse(int a[], int size)
{
    for (int i = 0; i < size / 2; i++) {
     
        // TODO: write the call to swap in the reverse function using the
        // address of the array positions array[i] and array[size-i-1].

	swap(&a[i], &a[size - i - 1]);

    } 

}

int main()
{
    int size = 5;
    
    int*a = new int[size];

    // TODO: declare a pointer, give it a dynamic array with "size" number of elements.
    // TODO: fill the array with elements 1-5 in positions 0-4, respectively.

    for (int i = 0; i < size; i++)
	{
		a[i] = i + 1;
	}

    reverse(a, size);
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    // TODO: free the dynamic memory from the pointer.

   delete[] a;
   return 0;
}

