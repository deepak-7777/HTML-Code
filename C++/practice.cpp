/////  check prime or not prime number 
// #include<iostream>
// using namespace std;
//   int main () {
//   int n, count = 0;
//   cout<<"Enter number: ";
//   cin>>n;
//   for(int i=1; i<=n; i++) {
//       if(n%i==0) {
//           count++;
//       }
//   }
//   if(count==2) {
//       cout<<"Prime number \n";
//   }
//   else {
//       cout<<"NOT prime number \n";
//   }
//     return 0;
// }


//// Calculate "simple interest" from principal (p), Rate (R), & Time (T)
// #include<iostream>
// using namespace std;
//   int main() {
//     float principal, rate, time, simpleInterest;
//     cout<<"Enter principal amount: ";
//     cin>>principal;
//    cout<<"Enter rate of interest (in percent): ";
//     cin>>rate;
//    cout<<"Enter time (in years): ";
//     cin>>time;
//     simpleInterest = (principal * rate * time) / 100;
//     cout<<"Simple Interest:"<<simpleInterest;
//     return 0;
// }

  ////  Square of a number. 
// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i++) {
//         int square = i * i;
//         cout << i << " - " << square <<endl;
//     }
//     return 0;
// }


  ////  Reverse of a number. 
// #include <iostream>
// using namespace std;
// int main() {
//    int n;
//    cout<<"Enter number: ";
//    cin>>n;
//    for(int i=n; i>=1; i--) {
//        cout<<i;
//    }
   
//     return 0;
// }


////   How to find if a number is power of 2 without any loop.
// #include <iostream>
// using namespace std;
// bool isPowerOfTwo(int n) {
//     return n > 0 && (n & (n - 1)) == 0;
// }
// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     if (isPowerOfTwo(number)) {
//        cout << number << " is a power of 2." <<endl;
//     } else {
//      cout << number << " is not a power of 2." <<endl;
//     }
//     return 0;
// }


 /////  Sum of number from 1 to n  (Without using loop).
//  #include<iostream>
//  using namespace std;
//  int main () {
//   int n;
//   cout<<"Enter number: ";
//   cin>>n;
//   int ans = n * (n+1) / 2;
//   cout<<ans<<endl;
//   return 0;
//  }



                          //// print factorial number  (recursion)
// #include<iostream>
// using namespace std;
// int factorial (int n) {
//     if(n==0) {
//       return 1;
//     }
//   return n * factorial (n-1);
// }
// int main () {
//   int num;
//   cout<<"Enter number: ";
//   cin>>num;
//   cout<<"the factorial of "<<num<<" is: "<<factorial(num)<<endl;
//   return 0;
// }



                        /////  print fibonaci series (Recursion)
// #include<iostream>
// using namespace std;
// int fib (int n) {
//     if(n<2) {
//       return 1;
//     }
//   return fib(n-2) + fib(n-1);
// }
// int main () {
//   int num;
//   cout<<"Enter number: ";
//   cin>>num;
//   cout<<"the fib of "<<num<<" is: "<<fib(num)<<endl;
//   return 0;
// }


                      ////  Count 1 to N 
// #include <iostream>
// using namespace std;
// int main() {
// 	int n ;
// 	cin>>n;
// 	int count=0;
// 	for(; n != 0; count++) {
// 	    n /= 10;
// 	}
// 	 cout<<count<<endl;
//      return 0;
// }


                    ////  A GAME -- Tower Of Hanoi  (Print to move this game).        
// #include <stdio.h>
// void hanoi(int n, char from, char to, char via) {
//    if(n == 1){
//       printf("Move disk 1 from %c to %c\n", from, to);
//    }
//    else{
//       hanoi(n-1, from, via, to);
//       printf("Move disk %d from %c to %c\n", n, from, to);
//       hanoi(n-1, via, to, from);
//    }
// }
// int main() {
//    int n = 4;
//    char from = 'A';
//    char to = 'B';
//    char via = 'C';
//    hanoi(n, via, to, from);
// }


                                ////  Sum and product of given number.
#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter number: ";
   cin>>n;
   int sum = 0;
   int product = 1;
    for (; n != 0; n /= 10) {
        sum += (n % 10);
        product *= (n % 10);
    }
   cout<<"Sum of number: "<<sum<<endl;
   cout<<"Product of number: "<<product<<endl;
    return 0;
}
