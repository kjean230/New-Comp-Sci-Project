// Kerwyn Jean
// April 4, 2024
// c++ code for midterm c

#include <string>
#include <iostream>
using namespace std;

int countVowels(string word);

int main()
{ 
  string phrase;
  cout << "Enter a phrase: ";
  getline(cin, phrase);

  // To do: implement user input
  countVowels(phrase);
  
  cout << "Number of vowels: " << countVowels(phrase) << endl;
}
    
// To do: Implement countVowels 
int countVowels(string word)
{

   int count = 0;
   for (char& c : word)
   {

   if (c >= 'A' && c <= 'Z')
	{
	c += ('a' - 'A');
	}

   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
	count++;
	}   
   }
return count;
}

