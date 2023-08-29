#include<iostream>
using namespace std;

int main() {
    double distance_km;

    cout << "Enter distance in kilometers: ";
    cin >> distance_km;

    double distance_m = distance_km * 1000;          // Conversion to meters


    cout << "Distance in kilometers: " << distance_km << " km" << endl;
    cout << "Distance in meters: " << distance_m << " m" << endl;


    return 0;
}

