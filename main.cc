#include <cstdlib>
#include <iostream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;


int main()
{
    float golfcourses = (float)15500; //approximate
    float yearlywater = (float)200000000; //200 million
    float dailywater = yearlywater / (float)365; //in gallons
    float hourlywater = dailywater/ (float)24;
    float minutewater = hourlywater/ (float)60;
    float secondwater = minutewater/ (float)60;

    float avgwaterdaily = 101.5;

    float sumpersecond = 0;
    float people;
    int i = 0;
    cout << fixed;
    cout.precision(3);
    cout << "approximate golf courses: \t" << golfcourses << endl;
    cout << "golf course water per second: \t" << secondwater << endl;
    cout << "avg person daily water use: \t" << avgwaterdaily << endl;
    cout << endl;
    while(true)
    {
        sleep(1);
        cout << "total gallons\t\t\tseconds" << endl;
        i++;
        sumpersecond += (golfcourses * secondwater);
        cout<< sumpersecond << " gal(s)\t\tin " << i << " sec(s)\t\t " << endl;
        people = sumpersecond/avgwaterdaily;
        cout << "the average person could survive on this water for " << people << " days (" << people/365 << " years)"<<endl;
        cout << endl;
    }

    return 0;
}