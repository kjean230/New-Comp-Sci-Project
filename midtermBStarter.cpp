// Kerwyn Jean
// April 4, 2024
// c++ code for midterm B

#include <iostream>
#include <stdio.h>

using namespace std;

// Find the number of values stored that is less than 0 and the number greater than
// 0 in a partially filled array of int, which uses the special sentinel value 0 to 
// indicate the end of the array
// @param a: int array 
// @param less: 
// @param greater: 
void findLessAndGreater (const int array[], int& less, int& greater/* TODO: declare the parameters */)
{
   //To do: implement the function ...

   less = 0;
   greater = 0;
 
   for (int i = 0; array[i] != 0; i++) 
   {
   if (array[i] > 0)
   {
	greater++;
   }
   else if (array[i] < 0)
   {            
	less++;
   }
   }

}


int main()
{
  int a[] = { -15, 23, 32, -12, 10, 9, -43, 5, -999, 0 };
  int less, greater;

  // ToDo: Call your function

  findLessAndGreater(a, less, greater);

  // Print the results
  cout << "Number of values less than 0 is " << less << endl;
  cout << "Number of values greater than 0 is " << greater << endl;
  return 0;
}

