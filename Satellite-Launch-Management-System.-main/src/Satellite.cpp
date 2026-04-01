#include <iostream> 
using namespace std; 
class Satellite { 
private: 
    int id; 
    string name; 
    int weight; 
public: 
    Satellite(int i, string n, int w) { 
        id = i; 
        name = n; 
        weight = w; 
    }

    void display() { 
        cout << "Satellite ID: " << endl;
        cout << "Name: "<<name<< endl; 
        cout << "Weight: " << weight << endl; 
    }

    ~Satellite(){
        cout << "Satellite object destroyed" << endl;
    }


}; 

int mainh(){ 
    Satellite s1(101, "INSAT", 2000); 
    s1.display(); 
    return 0; 
}