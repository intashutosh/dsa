#include <bits/stdc++.h>

using namespace std;

void insert(vector<int>& v, int data){
    v.push_back(data);
    int chi_ind = v.size()-1;
    int par_ind = (chi_ind-1)/2;
    while(par_ind >= 0){
        if(v[par_ind] < v[chi_ind]){
            swap(v[par_ind], v[chi_ind]);
            chi_ind = par_ind;
            par_ind = (chi_ind-1)/2;
        }
        else{
            break;
        }
    }
}

void del(vector<int>& v){
    int n = v.size();
    if(n == 0){
        cout << "underflow";
    }
    else{
        int temp = v[0];
        swap(v[0], v[n-1]);
        v.pop_back();
        n--;
        int par_ind = 0;
        int child_ind1 = 1;
        int child_ind2 = 2;
        while(child_ind1 < n){
            if(child_ind2 < n && v[child_ind1] > v[child_ind2]){
                if(v[par_ind] < v[child_ind1]){
                    swap(v[child_ind1], v[par_ind]);
                    par_ind = child_ind1;
                    child_ind1 = par_ind*2 +1;
                    child_ind2 = par_ind*2 + 2;
                }
                else{
                    break;
                }
            }
            else if(child_ind2 < n){
                if(v[par_ind] < v[child_ind2]){
                    swap(v[child_ind2], v[par_ind]);
                    par_ind = child_ind2;
                    child_ind1 = par_ind*2 +1;
                    child_ind2 = par_ind*2 + 2;
                }
                else{
                    break;
                }
            }
            else{
                if(v[par_ind] < v[child_ind1]){
                    swap(v[child_ind1], v[par_ind]);
                    par_ind = child_ind1;
                    child_ind1 = par_ind*2 +1;
                    child_ind2 = par_ind*2 + 2;
                }
                else{
                    break;
                }
            }
        }
        
    }
}

void traverse(vector<int> v){
    int n = v.size();
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int qn = q.size();
        while(qn--){
            int a = q.front();
            q.pop();
            cout << v[a] << " ";
            int c1 = a*2+1;
            int c2 = a*2+2;
            if(c1 < n)
            q.push(c1);
            if(c2 < n)
            q.push(c2);
        }
        cout << endl;
    }
}

template<int N>

void heapify(int (&a)[N], int n){
    int i = 0;
    int j = 1;
    int k = 2;
    while(j < n){
        if(k < n && a[j] > a[k]){
            if(a[j] > a[i]){
                swap(a[i], a[j]);
                i = j;
                j = 2*i+1;
                k = 2*i+2;
            }
            else{
                break;
            }
        }
        else if(k < n){
            if(a[k] > a[i]){
                swap(a[k], a[i]);
                i = k;
                j = 2*i+1;
                k = 2*i+2;
            }
            else{
                break;
            }
        }
        else{
            if(j < n && a[j] > a[i]){
                swap(a[j], a[i]);
                i = j;
                j = 2*i+1;
                k = 2*i+2;
            }
            else{
                break;
            }
        }
    }
}
template<int N>
// void create_heap(int (&a)[N], int n){
//     for(int i=0;i<n;i++){
//         int j = i;
//         int k = (i-1)/2;
//         while(j > 0 && a[k] < a[j]){
//             swap(a[k], a[j]);
//             j = k;
//             k = (j-1)/2;
//         }
//     }
// }

//my way
void create_heap(int (&a)[N], int n){
    for(int i=n/2-1;i>=0;i++){
        j = i;
        while(true){
            int child1 = 2*j + 1;
            int child2 = 2*j + 2;
            int largest = j;
            if(child1 < n && a[child1] > a[child2]){

            }
            if()
        }
    }

}


template<int N>
//heap sort
void heap_sort(int (&a)[N], int n){
    create_heap(a, n);
    int x = n;
    while(x>1){
        swap(a[0], a[x-1]);
        x--;
        heapify(a, x);
    }
}

int main(){
    int arr[] = {48, 28, 70, 64, 33, 2, 890};
    heap_sort(arr, 7);
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
}