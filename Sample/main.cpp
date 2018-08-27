#include <iostream>

using namespace std;

int main(){
    int smallRooms {0};
    int largeRooms {0};
    const double pricePerSmallRoom {25};
    const double pricePerLargeRoom {35};
    const double tax {0.06};
    const int validTime {30};
    
    cout << "Welcome to Frank's Carpet Cleaning Service!" << endl;
    cout << "How many small rooms are to be cleaned? ";
    cin >> smallRooms;
    cout << "\nHow many large rooms are to be cleaned? ";
    cin >> largeRooms;
    double cost = (smallRooms * pricePerSmallRoom) + (largeRooms * pricePerLargeRoom);    
    
    cout << endl;
    cout << "Number of small rooms: " << smallRooms << endl;
    cout << "Number of large rooms: " << largeRooms << endl;
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << cost * tax << endl;
    cout << "=====================================================" << endl;
    cout << "Total estimate: $" << cost + (cost * tax) << endl;
    cout << "This estimate is valid for " << validTime << " days" << endl;
}