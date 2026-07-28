// #include<iostream>
// using namespace std;

// class Notification
// {
// public:
//     void sendNotification(int userId, string message)
//     {
//         cout << "In-App Notification" << endl;
//         cout << "User ID : " << userId << endl;
//         cout << "Message : " << message << endl;
//     }

//     void sendNotification(string emailId, string subject, string content)
//     {
//         cout << "\nEmail Notification" << endl;
//         cout << "Email ID : " << emailId << endl;
//         cout << "Subject : " << subject << endl;
//         cout << "Content : " << content << endl;
//     }

//     void sendNotification(long long phoneNo, string message)
//     {
//         cout << "\nSMS Notification" << endl;
//         cout << "Phone No : " << phoneNo << endl;
//         cout << "Message : " << message << endl;
//     }
// };

// int main()
// {
//     Notification obj;

//     obj.sendNotification(101, "Welcome to our App");

//     obj.sendNotification("abc@gmail.com",
//                          "Meeting Reminder",
//                          "Meeting starts at 10 AM");

//     obj.sendNotification(9876543210,
//                          "Your OTP is 4567");

//     return 0;
// }






// #include <iostream>
// using namespace std;

// void increaseValue(int &x)
// {
//     x++;
//     cout << "Value inside increaseValue() = " << x << endl;
// }

// void increase(int &a)
// {
//     increaseValue(a);
// }

// int main()
// {
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     increase(num);

//     cout << "Value after function call = " << num << endl;

//     return 0;
// }






