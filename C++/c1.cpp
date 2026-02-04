                         ////  Functions  &&   Binary number system    &&   Bitwise Operator, Data Type Modifiers   &&  Arrays  Part-1

                
// #include<iostream>
// using namespace std;
//  void printdeepak () {
//     cout<<"Deepak kumar";
//  }
// int main () {
//     printdeepak();
//     return 0;   
// }


// #include<iostream>
// using namespace std;
//  int sum (int a, int b) {
//   int  s = a+b;
//   return s;
//  }
// int main () {
//    cout<<sum(10,5);
//     return 0;   
// }


//// calculate sum of numbers from 1 to N using by function.
// #include<iostream>
// using namespace std;
// int calculatesum(int n);
// int main () {
//   int n;
//    cout<<"Enter number: ";
//    cin>>n;
//    int result = calculatesum(n);
//   cout<<"The sum of numbers from 1 to "<<n<<" is : "<< result;
//     return 0;   
// }
// int calculatesum (int n) {
//      int sum = 0;
//   for(int i=1; i<=n; i++) {
//       sum+=i;
//   }
//   return sum;
//  }


/////   calculate N factorial
// #include<iostream>
// using namespace std;
//  int factorial(int n) {
//      int fact=1;
//  for(int i=1; i<=n; i++){
//      fact = fact * i;
//  }
//      return fact;
//  }
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     cout<<factorial(n);
//   return 0;
// }


////  Calculate sum of digits of a number.
// #include<iostream>
// using namespace std;
// int sumofdigits (int n) {
//     int digitsum = 0;
//     while(n>0) {
//     int lastdigits = n % 10;
//     n /= 10;
//     digitsum += lastdigits;
//     }
//     return digitsum;
// }
// int main () {
//     cout<<"Sum = "<<sumofdigits(1342);
// }


//// calculate nCr binomial coffecient for N & R.
// #include<iostream>
// using namespace std;
//  int factorial(int n) {
//      int fact=1;
//  for(int i=1; i<=n; i++){
//      fact = fact * i;
//  }
//      return fact;
//  }
//   int nCr (int n, int r) {
//     int fact_n = factorial(n);
//      int fact_r = factorial(r);
//       int fact_nmr = factorial(n-r);
//       return fact_n / (fact_r * fact_nmr);
//   }
// int main () {
//     int n = 6;
//     int r = 4;
//    cout<< nCr(n,r);
//   return 0;
// }


                                           ///// BINARY NUMBER SYSTEM
//  convert Decimal to binary.
// #include<iostream>
// using namespace std;
// int decimaltobinary(int decnum) {
//     int ans = 0, power = 1;
//     while(decnum>0) {
//         int remi = decnum % 2;
//         decnum /= 2;
//         ans += (remi * power);
//         power *= 10;
//     }
//     return ans;
// }
// int main () {
//      int decnum = 50;
//      cout<<decimaltobinary(decnum);
//     return 0;
// }


// #include<iostream>                       // convert Decimal to binary (1 to N ).
// using namespace std;
// int decimaltobinary(int decnum) {
//     int ans = 0, power = 1;
//     while(decnum>0) {
//         int remi = decnum % 2;
//         decnum /= 2;
//         ans += (remi * power);
//         power *= 10;
//     }
//     return ans;
// }
// int main () {
//      for(int i = 0; i <= 10; i++){
//         cout<<decimaltobinary(i)<<endl;
//      }
     
//     return 0;
// }


////  Convert Binary to Decimal.
// #include<iostream>
// using namespace std;
// int binarytodecimal(int binarynum) {
//     int ans = 0, power = 1;
//     while(binarynum>0) {
//         int remi = binarynum % 10;
      
//         ans += (remi * power);
//          binarynum /= 10;
//         power *= 2;
//     }
//     return ans;
// }
// int main () {
//      int binarynum = 110010;
//      cout<<binarytodecimal(binarynum);
//     return 0;
// }



////                                          BITWISE OPERATOR 
///////   Bitwise operator (X-OR)
// #include<iostream>
// using namespace std;
// int main () {
//  int a= 3, b=7;
//  cout<<(a^b);
//     return 0;
// }


///////   Bitwise operator (AND)
// #include<iostream>
// using namespace std;
// int main () {
//  int a= 3, b=7;
//  cout<<(a&b);
//     return 0;
// }


///////   Bitwise operator (OR)
// #include<iostream>
// using namespace std;
// int main () {
//  int a= 3, b=7;
//  cout<<(a|b);
//     return 0;
// }


///////   Bitwise operator (Left-shift)
// #include<iostream>
// using namespace std;
// int main () {
//  int a= 10, b=2;
//  cout<<(a << b);
//     return 0;
// }


///////   Bitwise operator (Right-shift)
// #include<iostream>
// using namespace std;
// int main () {
//  int a= 8, b=2;
//  cout<<(a >> b);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//  cout<<(4*5%2);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
 
//  cout<<(5-2*6);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//  cout<<sizeof(int)<<"\n";
//  cout<<sizeof(long int)<<"\n";
//  cout<<sizeof(long long int)<<"\n";
//  cout<<sizeof(short int)<<"\n";
//  cout<<sizeof(signed int);
//     return 0;
// }




////  Find smallest and largest number are array.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main () {
//     int nums[] = {12,9,7};
//     int size = 3;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//      for(int i=0; i<size; i++) {
//        smallest =min(nums[i], smallest);
//        largest =max(nums[i], largest);    
//      }
//     cout<<"Smallest = "<< smallest<<"\n";
//     cout<<"Largest = "<< largest;
//     return 0;
//}

 ////  find the target of number
// #include<iostream>
// using namespace std;
// int linearsearch(int arr[], int size, int target) {
//     for(int i=0; i<size; i++) {
//         if(arr[i]==target) {
//             return i;
//         }
//     }
//     return -1;
// }
// int main () {
//    int arr[]= {4,5,6,7,8,2,3};
//   int size = 7;
//    int target = 8;
//     cout<<"Target= "<<linearsearch(arr,size,target);
//     return 0;
// }


///// Reverse number of arrays
// #include<iostream>
// using namespace std;
// void reversearray(int arr[], int size) {
//     int start = 0, end = size -1;
//     while(start<end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main () {
//    int arr[]= {4,5,6,7,8,2,3};
//    int size = 7;
//    reversearray(arr,size);
//    for(int i=0; i<size; i++) {
//     cout<<arr[i]<<"\t";
//    }
//     return 0;
// }


////  print reverse number using by array.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     cout << "Reverse order: ";
//     for (int i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


///  print reverse number using by array  (Using by Functions) .
// #include <iostream>
// using namespace std;
// void reverseprint (int arr[], int size) {
//    for (int i = size - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }  
// }
// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]); 
//     reverseprint (arr, n);
//     return 0;
// }


                           ///// Reverse of number using by array. 
// #include <stdio.h>
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     for(int i=4; i>=0; i--) {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }