#include <iostream>
#include <string>
using namespace std;

class AirlineReservation {
private:
    int passengerID;
    string passengerName;
    string flightNumber;
    string destination;
    float ticketFare;
    string bookingStatus;

public:

    void bookTicket() {
        cout << "\nEnter Passenger ID: ";
        cin >> passengerID;

        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Flight Number: ";
        cin >> flightNumber;

        cin.ignore();

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Ticket Fare: ";
        cin >> ticketFare;

        bookingStatus = "Booked";

        cout << "\nTicket booked successfully!\n";
    }

    void displayPassengerDetails() {
        cout << "\n========== Passenger Details ==========\n";
        cout << "Passenger ID   : " << passengerID << endl;
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Flight Number  : " << flightNumber << endl;
        cout << "Destination    : " << destination << endl;
        cout << "Ticket Fare    : Rs. " << ticketFare << endl;
        cout << "Booking Status : " << bookingStatus << endl;
        cout << "=======================================\n";
    }

    void cancelTicket() {
        if (bookingStatus == "Booked") {
            bookingStatus = "Cancelled";
            cout << "\nTicket cancelled successfully!\n";
        }
        else {
            cout << "\nNo booked ticket available to cancel.\n";
        }
    }
};

int main() {
    

    AirlineReservation passenger;
    int choice;

    do {
        cout << "\n===== AIRLINE RESERVATION SYSTEM =====\n";
        cout << "1. Book a Ticket\n";
        cout << "2. Display Passenger Details\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            passenger.bookTicket();
            break;

        case 2:
            passenger.displayPassengerDetails();
            break;

        case 3:
            passenger.cancelTicket();
            break;

        case 4:
            cout << "\nThank you for using the system!\n";
            break;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}