#include <bits/stdc++.h>

// int main(){
//     for(int i=0;i<5;i++){
//         std::cout << "*****" << "\n";
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i; j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i; j++){
//             std::cout << j;
//         }
//         std::cout << "\n";
//     }
// }
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i; j++){
//             std::cout << i;
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=6-i;j>0; j--){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     int x = 5;
//     int y = 1;
//     bool f = false;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=9; j++){
//             if(j == x+y){
//                 f = false;
//             }
//             if(j==x){
//                 f = true;
//             }
//             if(f==true){
//                 std::cout << "*";
//             }
//             else{
//                 std::cout << " ";
//             }
//         }
//         x-=1;
//         y+=2;
//         std::cout << "\n";
//     }
// }

// int main(){
//     int y = 1;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<6-i;j++){
//             std::cout << " ";
//         }
//         for(int k=1;k<=y;k++){
//             std::cout << "*";
//         }
//         y+=2;
//         std::cout << "\n";
//     }
//     int x = 9;
//     for(int i=0;i<5;i++){
//         for(int j=1;j<i+1;j++){
//             std::cout << " ";
//         }
//         for(int k=1;k<=x;k++){
//             std::cout << "*";
//         }
//         x-=2;
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4-i;j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             if((j+i)%2==0){
//                 std::cout << "1";
//             }
//             else{
//                 std::cout << "0";
//             }
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<5;i++){
//         for(int j=1;j<=i;j++){
//             std::cout << j;
//         }
//         for(int k=1;k<=8-(2*i);k++){
//             std::cout << " ";
//         }
//         for(int l=i;l>=1;l--){
//             std::cout << l;
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     int x=1;
//     for(int i=1;i<=5;i++){
//         for(int j=x;j<=x+i-1;j++){
//             std::cout << j << " ";
//         }
//         x+=i;
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             char a = i+64;
//             std::cout << a;
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<5;i++){
//         for(int j=1;j<5-i;j++){
//             std::cout << " ";
//         }
//         for(int k=1;k<=i;k++){
//             char a = 64+k;
//             std::cout << a;
//         }
//         for(int l=1;l<=i-1;l++){
//             char b = 64 +l;
//             std::cout << b;
//         }
//         std::cout << "\n";
// }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=6-i;j<=5;j++){
//             char a = 64 + j;
//             std::cout << a << " ";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=6-i;j++){
//             std::cout << "*";
//         }
//         for(int j=1;j<=(i-1)*2;j++){
//             std::cout << " ";
//         }
//         for(int j=1;j<=6-i;j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             std::cout << "*";
//         }
//         for(int j=1;j<=8-(i-1)*2;j++){
//             std::cout << " ";
//         }
//         for(int j=1;j<=i;j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             std::cout << "*";
//         }
//         for(int j=1;j<=8-(i-1)*2;j++){
//             std::cout << " ";
//         }
//         for(int j=1;j<=i;j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
//     for(int i=2;i<=5;i++){
//         for(int j=1;j<=6-i;j++){
//             std::cout << "*";
//         }
//         for(int j=1;j<=(i-1)*2;j++){
//             std::cout << " ";
//         }
//         for(int j=1;j<=6-i;j++){
//             std::cout << "*";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//             if((i==2||i==3)&&(j==2||j==3)){
//                 std::cout << " ";
//             }
//             else{
//                 std::cout << "*";
//             }
//         }
//         std::cout << "\n" << "\n";
//     }
// }

// int main(){
//     int N;
//     std::cin >> N;
//     for(int i=1;i<=N;i++){
//         for(int j=N;j>=N+1-i;j--){
//             std::cout << j;
//         }
//         for(int j=N+1;j>=(2*i-1);j--){
//             std::cout << N+1-i;
//         }
//         if(i<N){
//         for(int j=N+1-i;j<=N;j++){
//             std::cout << j;
//         }
//         }
//         else{
//             for(int j=N+2-i;j<=N;j++){
//             std::cout << j;
//         }
//         }
    
//         std::cout << "\n";
//     }
//     for (int i=1;i<=N-1;i++){
//         for(int j=N;j>i;j--){
//             std::cout << j;
//         }
//         for(int j=1;j<=(2*i-1);j++){
//             std::cout << i+1;
//         }
//         for(int j=i+1;j<=N;j++){
//             std::cout << j;
//         }
//         std::cout << "\n";
//     }
// }

// int min(int a, int b){
//     return (a>b ? b : a);
// }

// void pattern22(int n){
//     for(int i=0;i<2*n-1;i++){
//         for(int j=0;j<2*n-1;j++){
//             int top = i;
//             int bottom = j;
//             int left = (2*n - 2)-i;
//             int right = (2*n-2)-j;
//             std::cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
//         }
//         std::cout << "\n";
//     }
// }

// int main(){
//     pattern22(4);
// }

int main(){
    int t[8] = {};
    for(int i=0;i<5;i++){
        std::cin >> t[i];
    }
    for(int j=0;j<5;j++){
        std::cout << t[j] << " ";
    }
}