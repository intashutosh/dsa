#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]] += 1;
//     }

//     int a;
//     cin >> a;

//     while(a--){
//         int num;
//         cin >> num;
//         cout << hash[num] << endl;
//     }
// }


//solution 1 using arrays
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
    // for(int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
//     int hash[13];
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         int num;
//         cin >> num;
//         cout << hash[num] << endl;
//     }
// }

//using true and false array(visited) using nested loops

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<bool> visited(n, false);
    for(int i=0;i<n;i++){
        if(visited[i] == true) continue;

        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << "->" << count << endl;
    }
}