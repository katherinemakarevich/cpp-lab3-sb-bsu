#include<iostream> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
do {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
  while (number-(int)number!=0)
  { cout << "u supposed to enter integers" << endl;
   cout << "try again =";
   cin >> number;
   break;
  }
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}
