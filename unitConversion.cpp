#include<iostream>
using namespace std;

int main() {
    double distance_km;

    cout << "Enter distance in kilometers: ";
    cin >> distance_km;

    double distance_m = distance_km * 1000;          // Conversion to meters
    double distance_cm = distance_km * 100000;       // Conversion to centimeters
    double distance_dm = distance_km * 10000;        // Conversion to decimeters

    cout << "Distance in kilometers: " << distance_km << " km" << endl;
    cout << "Distance in meters: " << distance_m << " m" << endl;
    cout << "Distance in centimeters: " << distance_cm << " cm" << endl;
    cout << "Distance in decimeters: " << distance_dm << " dm" << endl;

    return 0;
}

