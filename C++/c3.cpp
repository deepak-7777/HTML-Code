                 ////  Pointers Of C++   &&   Binary search in real life  &&   


// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     int a = 10;
//     int *ptr = &a;
//     int **ptr2 = &ptr;
//     cout<<&a<<endl;
//     cout<<&ptr<<endl;
//     cout<<ptr2<<endl;
//     cout<<*(&a)<<endl;
//     cout<<*(ptr)<<endl;
//     return 0;
// }

                                   //// NULL Pointer 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () { 
//     int *ptr = NULL; 
//     cout<<ptr<<endl;
//     return 0;
// }


                             /////  Pass by reference using alias.
// #include<iostream>
// using namespace std;
// void changeA (int &b) {
//     b = 20;
// }
// int main () { 
//    int a = 10;
//    changeA(a);
//     cout<<a<<endl;
//     return 0;
// }


                          /////  Pointer Arithmetic (Add number)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () { 
//    int arr[] = {1,2,3,4,5};
//    cout<<*arr<<endl;
//    cout<<*(arr+1)<<endl;
//    cout<<*(arr+2)<<endl;
//    cout<<*(arr+3)<<endl; 
//     return 0;
// }


                                 ///// Compare (ptr1 - ptr2)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () { 
//    int arr[] = {1,2,3,4,5};
//    int *ptr1;
//    int *ptr2;
//    cout<<ptr1<<endl;
//    cout<<ptr2<<endl;
//    cout<<(ptr1 < ptr2)<<endl;
//     return 0;
// }                                 


                        /////  Binary Search 
// #include<iostream>
// #include<vector>
// using namespace std;
// int binarysearch(vector<int>arr, int target) {
//     int start = 0, end = arr.size()-1;
//     while(start<=end) {
//         int mid = (start + end) / 2;
//         if(target>arr[mid]) {
//             start = mid + 1;
//         }
//         else if (target<arr[mid]) {
//             start = mid - 1;
//         }
//         else {
//             return mid;
//         }
//     }
//    return -1;
// }
// int main () {
//   vector<int>arr1 = {-1, 0, 3, 4, 5, 9, 12};
//   int tar1 = 12;
//   cout<<binarysearch(arr1, tar1)<<endl;
   
//     return 0;
// }



                                 ////  recursion binary search 
//  #include<iostream>
// #include<vector>
// using namespace std;
// int recbinarysearch(vector<int>arr, int target, int start,int end) {
//    if(start<=end) {
//        int mid = start + (end-start) / 2;
//        if (target>arr[mid]) {
//        return recbinarysearch(arr,target,mid+1,end);
//    }
//    else if (target<arr[mid]) {
//        return recbinarysearch(arr,target,start,mid-1);
//    }
//         else {
//             return mid;
//         }
//    }
//    return -1;
// }
// int main () {
//   vector<int>arr1 = {-1, 0, 3, 4, 5, 9, 12};
//   int target1 = 12;
//    vector<int>arr2 = {-1, 0, 3, 5, 9, 12};
//   int target2 = 12;
//   cout << recbinarysearch(arr2, target2, 0, arr2.size() - 1) << endl;
// //   cout<<recbinarysearch(arr2, target2)<<endl;
   
//     return 0;
// }



                                           ////    leet code question no -- 2824 
// #include <iostream>
// #include <vector>
// using namespace std;
// int countPairs(vector<int>& nums, int target) {
//     int count = 0;
//     int n = nums.size();
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = i + 1; j < n; ++j) {
//             if (nums[i] + nums[j] < target) {
//                 ++count;
//             }
//         }
//     }
    
//     return count;
// }
// int main() {
//     // Example 1
//     vector<int> nums1 = {-1, 1, 2, 3, 1};
//     int target1 = 2;
//     cout << "Output: " << countPairs(nums1, target1) << endl; 
//     return 0;
// }



