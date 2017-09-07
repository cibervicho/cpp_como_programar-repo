// 2.30 (Body Mass Index Calculator) Create a BMI calculator application that
//      reads the users weight in pounds and height in inches (or, if you prefer,
//      the users weight in kilograms and height in meters), then calculates and
//      displays the users body mass index. Also, the application should display
//      the following information from the Department of Health and Human
//      Services/National Institutes of Health so the user can evaluate his/her BMI:
//
//      BMI VALUES
//        Underweight: less than 18.5
//        Normal:      between 18.5 and 24.9
//        Overweight:  between 25 and 29.9
//        Obese:       30 or greater

#include <iostream>

using namespace std;

int main (void) 
{
    double weight = 0;
    double height = 0;
    double bmi = 0;

    cout << endl;
    cout << "Enter your wight (kilograms): "; cin >> weight;
    cout << "Enter your heigh (meters):    "; cin >> height;

    bmi = weight/(height * height);

    cout << "BMI: " << bmi << " - ";
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi >= 18.5 && bmi <= 24.9)
        cout << "Normal" << endl;
    else if (bmi >= 25 && bmi <=29.9)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;

    return 0;
}
