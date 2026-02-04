                  ////    Arrays Part-2   &&   Kadane's algorithm (Maximum subarray sum)   &&    Time and Space Complexity


// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<int>vec= {1,2,3};
//     cout<<vec[0]<<endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<char>vec= {'a','b','c'};
//     for(char value : vec) {
//     cout<<value<<endl;
//     }
//     return 0;
// }

//////    Use for Size
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<char>vec= {'a','b','c'};  
//     cout<<"size= "<<vec.size ();
//     return 0;
// }


/////   use for push_back      
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<int>vec;
//     cout<<"size= "<<vec.size ()<<"\n";
//     vec.push_back(25);
//     vec.push_back(20);
//     cout<<"after push back size= "<<vec.size ()<<"\n";
//     for(int value : vec) {
//     cout<<"Value= "<<value<<endl;
//     }
//     return 0;
// }


/////  Use for pop_back
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//     vector<int>vec;
//     cout<<"size= "<<vec.size ()<<"\n";
//     vec.push_back(25);
//     vec.push_back(55);
//     vec.push_back(15);
//     cout<<"after push back size= "<<vec.size ()<<"\n";
//   vec.pop_back(); // end of last digit 
//    for(int value : vec) {
//     cout<<"Value= "<<value<<endl;
//     }
//     return 0;
// }


////  Use for front  
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//   vector<int>vec;
//     vec.push_back(25);
//     vec.push_back(55);
//     vec.push_back(15);
//       cout<<vec.front();
//     return 0;
// }


///// Use for back
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//   vector<int>vec;
//     vec.push_back(25);
//     vec.push_back(55);
//     vec.push_back(15);
//       cout<<vec.back();
//     return 0;
// }


//// Use for at 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//   vector<int>vec;
//     vec.push_back(25);
//     vec.push_back(55);
//     vec.push_back(15);
//       cout<<vec.at(0);
//     return 0;
// }


                   ////              static vs Dynamic Allocation. (Capicity)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main () {
//   vector<int>vec;
//     vec.push_back(0); // no count for capacity
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//       cout<<vec.size()<<"\n";
//       cout<<vec.capacity()<<endl;  // size * 2
//     return 0;
// }



                  ////                print to subarray.
// #include<iostream>
// using namespace std;
// int main () {
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};
//     for(int start =0; start<n; start++) {
//      for(int end = start; end<n; end++) {
//       for(int i=start; i<=end; i++) {
//         cout<<arr[i];
//       }
//       cout<<" ";
//      }
//      cout<<endl;
//     }
//     return 0;
// }


       /////              Brute Force Appoarch  (Maximum subarray sum) 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main () {
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};
//     int maxsum = INT_MIN;
//     for(int start =0; start<n; start++) {
//         int currentsum = 0;
//      for(int end = start; end<n; end++) {
//          currentsum += arr[end];
//          maxsum = max(currentsum, maxsum);
//      }
//     }
//       cout<<"Max sumarray sum = "<<maxsum<<endl;
//     return 0;
// }


                                   ////        Pair sum 
// #include<iostream>
// #include<vector>
// using namespace std;
//  vector<int>pairsum(vector<int>nums, int target) {
//      vector<int>ans;
//      int n = nums.size();
//      for(int i=0; i<n; i++) {
//       for(int j = i+1; j<n; j++) {
//           if(nums[i]+nums[j] == target) {
//           ans.push_back(i);
//           ans.push_back(j);
//           }
//       }
//      }
//       return ans;
//  }
// int main () {
//     vector<int>nums = {2,7,11,15};  
//     int target = 9;   //  only for 2 number (1 pair)
//     vector<int>ans= pairsum(nums,target);
//     cout<<ans[0]<<","<<ans[1]<<endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
//  vector<int>pairsum(vector<int>nums, int target) {
//      vector<int>ans;
//      int n = nums.size();
//      int i = 0, j = n-1;
//      while(i<j) {
//          int pairsum = nums[i] + nums[j];
//          if(pairsum>target) {
//              j--;
//          }
//          else if (pairsum<target) {
//              i++;
//          } 
//          else {
//          ans.push_back(i);
//          ans.push_back(j);
//          return ans;
//          }
//      }
//      return ans;
//  }
// int main () {
//     vector<int>nums = {2,7,11,15};
//     int target = 9;
//     vector<int>ans= pairsum(nums,target);
//     cout<<ans[0]<<","<<ans[1]<<endl;
//     return 0;
// }


