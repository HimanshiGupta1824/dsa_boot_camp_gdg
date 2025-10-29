#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int>v1;
    vector<int>v2(3);
    for (int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    cout <<"\n";
    vector<int>v3(3,5);
    for (int i=0;i<v3.size();i++){
        cout << v3[i] << " ";
    }
    cout << "\n";
    vector<int>v4={1,2,3};
    for (int i=0;i<v4.size();i++){
        cout << v4[i] << " ";
    }
    v2.push_back(2);
    v2.push_back(6);
    cout << "\n";
    for (int i=0;i<v2.size();i++){
        cout << v2[i] << " ";
    }
    return 0;
}
