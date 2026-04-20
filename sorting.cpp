#include <bits/stdc++.h>
#include <cxxabi.h> 
#include <typeinfo>
using namespace std;

// //selection sorting
// void selection_sort(int arr[], int size){
//     for(int i=0;i<size-1;i++){
//         int min =arr[i];
//         for(int j=i;j<size;j++){
//             if(arr[j] <min){
//                 min = arr[j];
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// void insertion_sort(int arr[], int size){
//     for(int i=0;i<size;i++){
//         for(int j=i-1;j>=0;j--){
//             if(arr[j+1]<arr[j]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }
// void merge(int arr[], int low, int mid, int high){
//     int left=low;
//     int right=mid+1;
//     vector<int> arr2;
//     while((left<=mid) && (right<=high)){
//         if(arr[left] <= arr[right]){
//             arr2.push_back(arr[left]);
//             left++;
//         }
//         if(arr[left] > arr[right]){
//             arr2.push_back(arr[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         arr2.push_back(arr[left]);
//         left++;
        
//     }
//     while(right <= high){
//         arr2.push_back(arr[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i] = arr2[i-low];
//     }
// }

// void merge_sort(int arr[], int low, int high){
//     if(low >= high){
//         return;
//     }
//     int mid = (low+high)/2;
//     merge_sort(arr, low, mid);
//     merge_sort(arr, mid+1, high);
//     merge(arr, low, mid, high);
// }
// void rec_bubble_sort(vector<int> &v, int n, int i){
//     int size = v.size();
//     if(i==size){
//         return;
//     }
//     else if(n = size){
//         rec_bubble_sort(v, 0, i+1);
//     }
//     else if(v[n]<v[n+1]){
//         rec_bubble_sort(v, 0, i);
//     }
//     else{
//         if(v[n] >= v[n+1]){
//             int temp = v[n];
//             v[n] = v[n+1];
//             v[n+1] = temp;
//         }
//         rec_bubble_sort(v, n+1, i);
//     }
// }


// int main(){
//     vector<int> v = {3, 1, 2, 4, 1};
//     cout << v[0];
//     rec_bubble_sort(v, 0, 1);
//     for(int i=0;i<5;i++){
//         cout << v[i] << " ";
//     }
//     cout << v[0];
// }

// divide nad merge sort


// void mer(vector<int> &v, int low, int mid, int high){
//     vector<int> temp;
//     int left = low;
//     int right = mid+1;
//     while((left <= mid) && (right <= high)){
//         if(v[left] < v[right]){
//             temp.push_back(v[left]);
//             left++;
//         }
//         else{
//             temp.push_back(v[right]);
//             right++;
//         }
//     }
//     while(left <= mid){
//         temp.push_back(v[left]);
//         left++;
//     }
//     while(right <= high){
//         temp.push_back(v[right]);
//         right++;
//     }
//     for(int i=0;i<temp.size();i++){
//         v[low+i] = temp[i];
//     }
    //     for(int i=low;i<=high;i++){
    //     v[i] = temp[i-low];
    // }
// }
// void merge_sort(vector<int> &v, int low, int high){
//     if(low >= high){
//         return;
//     }
//     int mid = (low+high)/2;
//     merge_sort(v, low, mid);
//     merge_sort(v, mid+1, high);
//     mer(v, low, mid, high); 
// }

// int func(vector<int> &v, int low, int high){
//     int pivot = v[low];
//     int partition = -1;
//     for(int i=low+1;i<=high;i++){
//         if(v[i] > pivot){
//             for(int j=high;j>low;j--){
//                 if(j<i){
//                     swap(v[low], v[j]);
//                     partition = j;
//                     i=high+1;
//                     break;
//                 }
//                 else if(v[j] < pivot){
//                     swap(v[i], v[j]);
//                     break;
//                 }
//             }
//         }
//     }
//     return partition;
// }

// int partition(vector<int> &v, int low, int high){
//     int pivot = v[low];
//     int i=low;
//     int j= high;
//     while(i<j){
//         while(v[i] <= pivot && i<=high-1){
//             i++;
//         }
//         while(v[j] > pivot && j>=low+1){
//             j--;
//         }
//         if(i<j){
//             swap(v[i], v[j]);
//         }
//     }
//     swap(v[low], v[j]);
//     return j;
// }
// void middle(vector<int> &v, int low, int high){
    
// if(low<high){
//         int p = partition(v, low, high);
//         middle(v, low, p-1);
//         middle(v, p+1, high);
//     }
// }

// void bubble_sort(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(v[j] > v[j+1]){
//                 swap(v[j], v[j+1]);
//             }
//         }
//     }
// }

//recursive bubble sort
// void rec_bubble_sort(vector<int> &v, int n){
//     if(n==0)return;
//     int size = v.size();
//     int i=0;
//     while(i<size-n-1){
//         if(v[n] > v[n+1]){
//             swap(v[n], v[n+1]);
//         }
//         i++;
//     }
//     rec_bubble_sort(v, n-1);

// }

//insertion_sort

void insertion_sort(vector<int> &v, int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(v[j] < v[j-1]){
                swap(v[j], v[j-1]);
            }
        }
    }
}

//recursive_insertion_sort
void recursive_insertion_sort(vector<int> &v, int n){
    int size = v.size();
    if(n==size){
        return;
    }
    for(int j=n;j>0;j--){
        if(v[j] < v[j-1]){
            swap(v[j], v[j-1]);
        }
    }
    recursive_insertion_sort(v, n+1);

}

int main(){
    vector<int> v = {1, 3, 2};
    recursive_insertion_sort(v, 1);
    for(int i=0;i<3;i++){
        cout << v[i] << " ";
    }
}






        
