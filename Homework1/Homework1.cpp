#include <iostream>
#include <iomanip>

int main()
{
    const int INCHES_PER_FOOT = 12;
    const double METERS_PER_INCH = 0.0254;
    const double POUNDS_PER_KILOGRAM = 2.2;

    int heightFeet;
    int heightInches;
    double weightPounds;

    std::cout << "Enter your height in feet: ";
    std::cin >> heightFeet;

    std::cout << "Enter the remaining inches: ";
    std::cin >> heightInches;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> weightPounds;

    const int totalInches =
        heightFeet * INCHES_PER_FOOT + heightInches;

    const double heightMeters =
        totalInches * METERS_PER_INCH;

    const double weightKilograms =
        weightPounds / POUNDS_PER_KILOGRAM;

    const double bmi =
        weightKilograms / (heightMeters * heightMeters);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your BMI is " << bmi << '\n';

    return 0;
}
