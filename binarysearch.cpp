#include <bits/stdc++.h>
using namespace std;

// int main(){
//     //for arrays
//     int A[] = {1, 2, 3, 4, 5, 6};
//     bool a = binary_search(A, A+6, 4);
//     bool b = binary_search(A, A+6, 7);
//     cout << a << " " << b << "\n";

//     //for vectors
//     vector<int> B = {1, 2, 3, 4, 5, 6};
//     bool c = binary_search(B.begin(), B.end(), 4);
//     bool d = binary_search(B.begin(), B.end(), 7);
//     cout << c << " " << d;

// }

// int bin_search(vector<int> &v, int target){
//     int low = 0;
//     int high = v.size()-1;
    
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(low == high){
//             return low;
//             break;
            
//         }
//         if(v[mid] > target){
//             high = mid-1;
//         }
//         else if (v[mid] < target){
//             low = mid+1;
//         }
//     }
//     return -1;
// }

// int bin_search(vector<int> v, int low, int high, int target){
//     int mid = (low+high)/2;
//     if(low==high){
//         return low;
//     }
//     else if(low>high){
//         return -1;
//     }
//     else if(v[mid] < target){
//         return bin_search(v, mid+1, high, target);
//     }
//     else{
//         return bin_search(v, low, mid-1, target);
//     }
// }

// int lower_bound(vector<int> &v, int target){
    // int n = v.size();
    // int low = 0;
    // int high = n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(v[mid] == target){
//             return mid;
//         }
//         else if(low==high){
//             return low+1;
//         }
//         else if(v[mid] < target){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     return -1;
// }

int bin(vector<int> &v, int target){
    int n = v.size();
    int low =0;
    int high = n-1;
    int ans =n;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid] >= target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}


int main(){
    vector<int> v = {2, 4, 6, 7, 9};
    cout << bin(v, 7);
}