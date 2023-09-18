/*Descriotion: convert from miles to KM

Input : distance in mile
formula: distance_in_KM =distance_in_mile * 1.609
outout : distance in KM

*/
#include <iostream>

int main()
{
    int distance_in_miles = 0;
    float distance_in_km = 0.0;
    std ::cout << "Enter the Distance" << std::endl;
    std::cin >> distance_in_miles;
    std::cout << "Distance in miles = " << distance_in_miles << std::endl;


    return 0;
}
