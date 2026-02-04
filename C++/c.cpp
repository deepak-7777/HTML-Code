                     //////                       LECTURE -- 2 && 3 && 4


// #include<iostream>
// using namespace std;
// int main () {
//     int a=5, b=10;
//     cout<<"sum=" << (a+b);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//    int ans= (5/(double)2);
//     cout<<ans;
//     return 0;
// }


//// sum of 2 number.
//  #include<iostream>
// using namespace std;
// int main () {
//    int a;
//     cout<<"Enter a: ";
//     cin>>a;
//     int b;
//      cout<<"Enter b: ";
//     cin>>b;
//    int sum=a+b;
//    cout<<"sum="<<sum;
//     return 0;
// }


//// check positive and negative.   
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     if(n>0) {
//         cout<<"Positive number";
//     }
//     else if (n<0) {
//         cout<<"Negative number";
//     }
//     else {
//         cout<<"No number";
//     }
//     return 0;
// }


//// check positive and negative.
// #include<iostream>
// using namespace std;
// int main () {
//     int n=45;
//     cout<<(n>0 ? "Positive" : "Negative"); 
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n=20;
//     for(int i=1; i<=n; i++) {
//          if(i % 2 != 0){
//        cout<<i<<"\t" ;
//         }
//     }
//     cout<<endl;
//     return 0;
// }


//// write the check of prime or not prime number.
// #include<iostream>
// using namespace std;
// int main () {
//     int n,count=0;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//     if(n%i==0) {
//       count++;
//     }
// }
// if(count==2) {
// cout<<"Prime number";
// } 
// else {
//    cout<<"not a prime number";
// }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//         cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main () {
//     for(int i=1; i<=5; i++) {
//         for(int j=i; j<=5; j++) {
//         cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=0; i<n; i++) {
//         char ch='A';
//         for(int j=0;j<n; j++) {
//             cout<<ch<<"\t";
//             ch = ch + 1;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        for(int j=0;j<n; j++) {
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int num=1;
//     for(int i=0; i<n; i++) {
//         for(int j=0;j<n; j++) {
//             cout<<num<<"\t";
//             num++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     char ch='A';
//     for(int i=0; i<n; i++) {
//         for(int j=0;j<n; j++) {
//             cout<<ch<<"\t";
//             ch++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//         cout<<i;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//         cout<<i;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     char ch = 'A';
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//         cout<<ch;
//         ch++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     char ch = 'A';
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//         cout<<ch;
//         }
//         ch++;
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         for(int j=i; j>=1; j--) {
//         cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int num=1;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//         cout<<num<<"\t";
//         num++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     char ch='A';
//     for(int i=1; i<=n; i++) {
//         for(int j=i;j>=1; j--) {
//             cout<<char('A'+j-1)<<"\t";
//               ch++;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//    int num=1;
//     for(int i=0; i<n; i++) {
//         for(int j=0;j<i; j++) {
//             cout<<"\t";
//         }
//         for(int j=0; j<n-i; j++) {
//             cout<<(i+1)<<"\t";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

                           ///// PYRAMID LOOP
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=0; i<n; i++) {
//         for(int j=0;j<n-i-1; j++) {
//             cout<<" ";
//         }
//         for(int j=1; j<=i+1; j++) {
//            cout<<j;
//         }
//        for(int j=i; j>0; j--) {
//            cout<<j;
//        }
//         cout<<"\n";
//     }
//     return 0;
// }


//                          ///// HOLLOw diamond pattern
 