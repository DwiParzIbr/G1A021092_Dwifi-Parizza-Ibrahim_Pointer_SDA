#include <iostream>

using namespace std;

int main(){
    //deklarasi variabel & nilai awal variabel
    int a = 0, b = 0, c = 0; 
    int *p1 = 0, *p2 = 0, *p3 = 0;

    a = 10;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    b = 15;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    c = 27;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    p1 = &a;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    p2 = &b;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    *p1 = c;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    a = *p2;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    b = 6;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    p3 = &b;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    p3 = &c;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
    *p1 = *p3;
    cout << "|a: " << a << "| b: " << b << "| c: " << c  << "| p1: " << p1 << "| p2: " << p2 << "| p3: " << p3 << endl;
    
}
