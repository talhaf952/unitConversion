#include<iostream>
using namespace std;

int main() {
    double distance_km;

    cout << "Enter distance in kilometers: ";
    cin >> distance_km;


    double distance_dm = distance_km * 10000;        // Conversion to decimeters

    cout << "Distance in kilometers: " << distance_km << " km" << endl;

    cout << "Distance in decimeters: " << distance_dm << " dm" << endl;

    return 0;
}

