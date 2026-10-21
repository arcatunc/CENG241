#include <iostream>
using namespace std;

class Rectangle{
    int width;
    int height;

    public:
        Rectangle(int w, int h){
            width = w;
            height = h;
            int area = w*h;
            cout << "The area of the rectangle is: " << area;
        }

};

int main(){

    Rectangle r(10,5);


    return 0;
}