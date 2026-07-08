#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rects[9] =
    {
        Rectangle(2,3),
        Rectangle(3,4),
        Rectangle(4,5),
        Rectangle(5,6),
        Rectangle(6,7),
        Rectangle(7,8),
        Rectangle(8,9),
        Rectangle(9,10),
        Rectangle(10,11)
    };

    cout << "Danh sach cac hinh chu nhat\n\n";

    for(int i = 0; i < 9; i++)
    {
        cout << "Hinh " << i + 1 << endl;
        cout << "Chu vi: " << rects[i].perimeter() << endl;
        cout << "Dien tich: " << rects[i].area() << endl;
        cout << "---------------------------" << endl;
    }

    return 0;
}
