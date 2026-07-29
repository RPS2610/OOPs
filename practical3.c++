// #include<iostream>
// using namespace std;

// inline float celsiusToFahrenheit(float c){
//     return (c * 9 / 5) + 32;
// }

// inline float fahrenheitToCelsius(float f){
//     return (f - 32) * 5 / 9;
// }

// int main(){
//     int choice;
//     float temp;

//     do{
//         cout<<"\n----- Temperature Converter -----";
//         cout<<"\n1. Celsius to Fahrenheit";
//         cout<<"\n2. Fahrenheit to Celsius";
//         cout<<"\n3. Exit";
//         cout<<"\nEnter your choice: ";
//         cin>>choice;

//         switch(choice){
//             case 1:{
//                 cout<<"Enter temperature in Celsius: ";
//                 cin>>temp;
//                 cout<<"Temperature in Fahrenheit: "<<celsiusToFahrenheit(temp);
//                 break;
//             }
//             case 2:{
//                 cout<<"Enter temperature in Fahrenheit: ";
//                 cin>>temp;
//                 cout<<"Temperature in Celsius: "<<fahrenheitToCelsius(temp);
//                 break;
//             }
//             case 3:{
//                 cout<<"Exiting...";
//                 break;
//             }
//             default:
//                 cout<<"Invalid Choice!";
//         }
//     }while(choice!=3);

//     return 0;
// }





// #include<iostream>
// using namespace std;

// float average(int m1, int m2, int m3=0, int m4=0, int m5=0){
//     return (m1+m2+m3+m4+m5)/5.0;
// }

// int main(){
//     int m1, m2;

//     cout<<"Enter marks of Subject 1: ";
//     cin>>m1;

//     cout<<"Enter marks of Subject 2: ";
//     cin>>m2;

//     cout<<"Average Marks = "<<average(m1,m2);

//     return 0;
// }




// #include<iostream>
// using namespace std;

// void vote(int age){
//     if(age>=18)
//         cout<<"Eligible to vote.";
//     else
//         cout<<"Not eligible to vote.";
// }

// void vote(int age, string name){
//     if(age>=18)
//         cout<<name<<" is eligible to vote.";
//     else
//         cout<<name<<" is not eligible to vote.";
// }

// void vote(int age, string name, string post){
//     if(age>=18)
//         cout<<name<<" is eligible to vote for the post of "<<post<<".";
//     else
//         cout<<name<<" is not eligible to vote for the post of "<<post<<".";
// }

// int main(){
//     int choice, age;
//     string name, post;

//     do{
//         cout<<"\n----- Voting Eligibility -----";
//         cout<<"\n1. Check by Age";
//         cout<<"\n2. Check by Age and Name";
//         cout<<"\n3. Check by Age, Name and Post";
//         cout<<"\n4. Exit";
//         cout<<"\nEnter your choice: ";
//         cin>>choice;

//         switch(choice){
//             case 1:{
//                 cout<<"Enter Age: ";
//                 cin>>age;
//                 vote(age);
//                 break;
//             }
//             case 2:{
//                 cout<<"Enter Name: ";
//                 cin>>name;
//                 cout<<"Enter Age: ";
//                 cin>>age;
//                 vote(age, name);
//                 break;
//             }
//             case 3:{
//                 cout<<"Enter Name: ";
//                 cin>>name;
//                 cout<<"Enter Age: ";
//                 cin>>age;
//                 cout<<"Enter Post: ";
//                 cin>>post;
//                 vote(age, name, post);
//                 break;
//             }
//             case 4:{
//                 cout<<"Exiting...";
//                 break;
//             }
//             default:
//                 cout<<"Invalid Choice!";
//         }
//     }while(choice!=4);

//     return 0;
// }