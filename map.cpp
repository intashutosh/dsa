#include <bits/stdc++.h>
using namespace std;

// int main(){
//     map<int, int> mpp;
//     mpp.emplace(1, 2);
//     mpp.emplace(4, 5);
//     mpp.emplace(7, 8);
//     mpp.emplace(0, 8);
//     // for(std::pair<int, int> i : mpp){
//     //     std::cout << i.first << " " << i.second << "\n";
//     // }
//     // auto it = mpp.find(3);
//     // std::cout << (*it).first << " " << (*it).second;
//     // std::cout << mpp[3];
//     // auto a = mpp.find(1);
//     // std::cout << (*a).second; 
//     // auto it = mpp.lower_bound(1);
//     // auto it2 = mpp.upper_bound(2);
//     //if we enter the number that is not there then it points to position after the end element
//     for(auto i : mpp){
//         cout << i.first << " ";
//     }
//     cout << mpp[4];
//     //erase, swap, size and empty are same as above
// }

// for(int i=0;i<n;i++){
//             if(nums[i]>=0){
//                 if(t < 0){
//                     v.push_back(t);
//                     t = nums[i];
//                 }
//                 else{
//                     t+=nums[i];
//                 }
//             }else{
//                 if(t >= 0){
//                     v.push_back(t);
//                     t = nums[i];
//                 }
//                 else{
//                     t+=nums[i];
//                 }
//             }
//         }
//         for(int i=0;i<v.size();i++){
//             if(n[i] >=0){
                
//             }
//         }

int main(){
    map<pair<string, string>, int> m = {((1, 2), 3), ((12, 4), 7)};
    cout << m[1];
}