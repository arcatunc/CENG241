#include <iostream>
using namespace std;

class Rectangle{
    int width;
    int height;

    public:
        Rectangle(){
            width = 0;
            height = 0;
        }
        void input(){
            cout << "Please enter the width: ";
            cin >> width;
            cout << "Please enter the height: ";
            cin >> height;
        }
        int area(){
            return width * height;
        }

};

int main(){

    Rectangle rec;
    rec.input();
    cout << "Area: " << rec.area() << endl;



    return 0;
}