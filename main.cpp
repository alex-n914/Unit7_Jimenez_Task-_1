//Unit7_Jimenez_Task_1_ Dr_T 2-24-2020 Structs C++
#include <iostream>
using namespace std;
//declare structs above int main()
struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //save space here for our toString() override
};

int main() 
{
  timeOfDay t; //declare instance of the struct
  t.Hour = 7; //put data in the struct
  t.Minute = 11; 
  t.Second = 17;
  cout << "\nCurrent time: " << endl; //print data in the struct
  cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  appDate a; //declare instance of the struct
  a.dayOfMonth = 19;
  a.month = 03; 
  a.year = 1992;
  cout << "\nBirth date: " << endl; //type of data printed
  cout << a.month << "-" << a.dayOfMonth << "-" << a.year << endl;

  event eOne; //declare instance of the struct
  eOne.eventName = "Birthday of Alex";
  eOne.isUrgent = true; 
  //set the event dayOfMonth
  eOne.eventDate.dayOfMonth = 2; //instance.memberStruct.memberVariable
  eOne.eventDate.month = 2;
  eOne.eventDate.year = 2020;
  //set the event time
  eOne.eventTime = t; //use date from t to populate eOne.eventTime

  //print all elements of the event ,eOne, to the screen
  cout << "\nElements in the event eOne: " << endl;
  cout << "\nEvent Name: " << endl;
  
  string status = "";
  eOne.isUrgent = true;
  status = (eOne.isUrgent) ? "yes": "no";
  cout << "Is the event urgent: " << status << endl;

  cout << "\nDay: " << eOne.eventDate.month << "/"
                  << eOne.eventDate.dayOfMonth << "/"
                  << eOne.eventDate.year;
  cout << "\nTime: " << eOne.eventTime.Hour << ":"
                  << eOne.eventTime.Minute << ":"
                  << eOne.eventTime.Second;

  return 0;
}