#include<iostream>
using namespace std;

int main() {
    double distance_km;

    cout << "Enter distance in kilometers: ";
    cin >> distance_km;

    double distance_cm = distance_km * 100000;       // Conversion to centimeters


    cout << "Distance in kilometers: " << distance_km << " km" << endl;
    cout << "Distance in centimeters: " << distance_cm << " cm" << endl;


    return 0;
}

