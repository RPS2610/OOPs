// #include <iostream>
// #include <string>
// using namespace std;

// class MovieTicket
// {
// private:
//     string movieName;
//     double ticketPrice;
//     int ticketsAvailable;
//     int bookedTickets;
//     double totalAmount;

// public:
//     MovieTicket(string name, double price)
//     {
//         movieName = name;
//         ticketPrice = price;
//         ticketsAvailable = 25;
//         bookedTickets = 0;
//         totalAmount = 0;
//     }

//     void bookTicket(int tickets)
//     {
//         if (tickets <= ticketsAvailable)
//         {
//             bookedTickets = tickets;
//             ticketsAvailable -= tickets;
//             totalAmount = bookedTickets * ticketPrice;
//             cout << bookedTickets << " ticket(s) booked successfully for "
//                  << movieName << endl;
//         }
//         else
//         {
//             cout << "Booking Failed! Only "
//                  << ticketsAvailable << " tickets available.\n";
//         }
//     }

//     void display()
//     {
//         cout << "\nMovie Name        : " << movieName << endl;
//         cout << "Ticket Price      : Rs. " << ticketPrice << endl;
//         cout << "Booked Tickets    : " << bookedTickets << endl;
//         cout << "Tickets Remaining : " << ticketsAvailable << endl;
//         cout << "Total Amount      : Rs. " << totalAmount << endl;
//     }
// };

// int main()
// {
//     MovieTicket m1("Pushpa 2", 250);
//     MovieTicket m2("War 2", 300);
//     MovieTicket m3("Jawan", 200);

//     m1.bookTicket(15);
//     m2.bookTicket(9);
//     m3.bookTicket(8);

//     cout << "\n----- Booking Details -----\n";

//     m1.display();
//     m2.display();
//     m3.display();

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class MovieTicket
// {
// private:
//     string customerName;
//     static int ticketsAvailable;
//     int bookedTickets;
//     int ticketPrice;
//     int totalAmount;

// public:
//     MovieTicket(string name)
//     {
//         customerName = name;
//         ticketPrice = 200;
//         bookedTickets = 0;
//         totalAmount = 0;
//     }

//     void bookTicket(int tickets)
//     {
//         if (tickets <= ticketsAvailable)
//         {
//             bookedTickets = tickets;
//             ticketsAvailable -= tickets;
//             totalAmount = bookedTickets * ticketPrice;
//             cout << customerName << " booked " << bookedTickets << " ticket(s).\n";
//         }
//         else
//         {
//             cout << "Booking Failed for " << customerName
//                  << ". Only " << ticketsAvailable << " ticket(s) available.\n";
//         }
//     }

//     void display()
//     {
//         cout << "\nCustomer Name     : " << customerName << endl;
//         cout << "Booked Tickets    : " << bookedTickets << endl;
//         cout << "Ticket Price      : Rs. " << ticketPrice << endl;
//         cout << "Total Amount      : Rs. " << totalAmount << endl;
//         cout << "Tickets Remaining : " << ticketsAvailable << endl;
//     }
// };

// int MovieTicket::ticketsAvailable = 25;

// int main()
// {
//     MovieTicket c1("Rudra");
//     MovieTicket c2("Rahul");
//     MovieTicket c3("Aman");

//     c1.bookTicket(15);
//     c2.bookTicket(9);
//     c3.bookTicket(8);

//     cout << "\n----- Booking Details -----\n";

//     c1.display();
//     c2.display();
//     c3.display();

//     return 0;
// }
