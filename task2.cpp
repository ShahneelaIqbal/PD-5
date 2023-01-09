#include <iostream>
using namespace std;

double volumeOfPyramid(double lenght, double width, double height);

main()
{

    double lenght;
    double width;
    double height;
    string unit;
    double answer;

    cout << "Enter lenght:  ";
    cin >> lenght;
    cout << "Enter width:  ";
    cin >> width;
    cout << "Enter height:  ";
    cin >> height;
    cout << "Enter unit:  ";
    cin >> unit;

    answer = volumeOfPyramid(lenght, width, height);

    if (unit == "cm")
    {
        answer *= 1000000.0;
    }

    else if (unit == "km")
    {
        answer /= 1000000000;
    }

    else if (unit == "mil")
    {
        answer *= 1000000000;
    }
    else{

    }

    cout << "Volume is:  " << answer;
}

double volumeOfPyramid(double lenght, double width, double height)
{
    float volume = (lenght * width * height) / 3;
    return volume;
}
