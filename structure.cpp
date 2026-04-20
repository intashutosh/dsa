#include <iostream>

using namespace std;

struct Student{
    string name;
    int roll_no;
    int batch;
    string specialisation;
};

union university{
    char grade;
    int year_est;
    int no_of_students;
};

int main(){
    int *p1, *p2, *p3;
    p1 = new int;
    p2 = new int;
    p3 = new int;
    int n;
    cin >> n;
    p1 = new int[n];
    for(int i=0;i<n;i++){
        
    }
}