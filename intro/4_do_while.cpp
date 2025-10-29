#include <iostream>
using namespace std;
int main (){
int x=0;
cout << "while loop : ";
while(x>0){
    cout << x << "\n";
    x--;
}
int y=0;
cout << "\ndo while loop : ";
do {
    cout << y << "\n";
    y--;
}while(y>0);
return 0;    
}
