#include <iostream>
using namespace std;

int main() {

    // Sample house dataset
    double area[] = {1000, 1500, 2000, 2500, 3000};
    double bedrooms[] = {2, 3, 3, 4, 4};
    double bathrooms[] = {1, 2, 2, 3, 3};
    double price[] = {100000, 180000, 250000, 320000, 400000};

    int n = 5;

    // Calculate average values
    double avgArea = 0;
    double avgBedrooms = 0;
    double avgBathrooms = 0;
    double avgPrice = 0;

    for (int i = 0; i < n; i++) {
        avgArea += area[i];
        avgBedrooms += bedrooms[i];
        avgBathrooms += bathrooms[i];
        avgPrice += price[i];
    }

    avgArea /= n;
    avgBedrooms /= n;
    avgBathrooms /= n;
    avgPrice /= n;

    // Display averages
    cout << "Average Area: " << avgArea << endl;
    cout << "Average Bedrooms: " << avgBedrooms << endl;
    cout << "Average Bathrooms: " << avgBathrooms << endl;
    cout << "Average Price: " << avgPrice << endl;

    // Take input
    double inputArea;

    cout << "\nEnter square footage: ";
    cin >> inputArea;

    // Simple price prediction
    double predictedPrice = avgPrice / avgArea * inputArea;

    cout << "Predicted Price: " << predictedPrice << endl;

    return 0;
}