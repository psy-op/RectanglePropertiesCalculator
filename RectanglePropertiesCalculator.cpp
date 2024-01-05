#include <iostream>
#include <string>
using namespace std;

// Class definition for Rectangle
class Rectangle {
private:
    float length;
    float width;

public:
    // Function to set the length
    void setlength(float len) {
        length = len;
    }

    // Function to set the width
    void setwidth(float wid) {
        width = wid;
    }

    // Function to calculate the perimeter
    float perimeter() {
        return (2 * length + 2 * width);
    }

    // Function to calculate the area
    float area() {
        return length * width;
    }

    // Function to display the length and width
    void show() {
        cout << "Length: " << length << " Width: " << width << endl;
    }

    // Function to calculate the areas and compare them to rectangle 1 and 2
    int sameArea(Rectangle r2) {
        float area1 = length * width;
        float area2 = r2.length * r2.width;
        if (area1 == area2)
            return 1;
        return 0;
    }
};

// Main function to create two objects and find their answers
// Set new length and width for the first object and calculate everything
int main() {
    Rectangle r1, r2;

    r1.setlength(5);
    r1.setwidth(2.5);

    r2.setlength(5);
    r2.setwidth(18.9);

    cout << "First rectangle: " << endl;
    r1.show();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl
         << endl;

    cout << "Second rectangle: " << endl;
    r2.show();
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl
         << endl;

    if (r1.sameArea(r2))
        cout << "Both rectangles have the same area" << endl;
    else
        cout << "Both rectangles do not have the same area" << endl
             << endl;

    r1.setlength(15);
    r1.setwidth(6);

    cout << "First rectangle: " << endl;
    r1.show();
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl
         << endl;

    cout << "Second rectangle: " << endl;
    r2.show();
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl
         << endl;

    if (r1.sameArea(r2))
        cout << "Both rectangles have the same area" << endl;
    else
        cout << "Both rectangles do not have the same area" << endl;

    return 0;
}
