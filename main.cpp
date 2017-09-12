// Jared Konigsberg CS1300 Fall 2017
// Recitation: 202– Favorite TA
//
// Assignment 2

#include <iostream>

using namespace std;

/**
*algorithim calculates the population increase in a year given the intial population
*ouputs the new population
*Increasing Birth and immagration decreaseing death
*/

int howMany(int population) {


    cout << "Input an initial population: ";
    cin >> population;
    int seconds = 0;

    while ( seconds < 31536000) {

   if (seconds % 8 == 0)

     population = population + 1;


    if (seconds % 12 == 0)

        population = population - 1;


   if( seconds % 33 == 0)

     population = population + 1;


        seconds ++;
}

//cout << population   << endl;

return population -1;

}




/**
 * Algorithm description for function howLong() goes here
 *
 */
void howLong(int seconds) {

    cout << "Input a time between 0 and 1,000,000: ";
    cin >> seconds;
    if( seconds > 1000000)
        seconds = 1000000;
    if( seconds < 0)
        seconds = 0;

    int w;
    int x;
    int y;
    int z;

    w = seconds/ 86400;
    x = (seconds % 86400) /3600;
    y = ((seconds % 86400 ) % 3600 ) / 60;
    z =  ((seconds % 86400 ) % 3600 ) % 60;


    cout<< "Time is " << w <<" days, "<< x << " hours, " << y << " minutes, and "<< z << " seconds." <<endl;

}


/**
 * Algorithm description for function howHot() goes here
 *
 */
int howHot(int temperature) {
    cout<< "Input a tempurature you would like to convert to celsius: ";
    cin >> temperature;
    float c;

     c = (temperature * 1.8 ) +32 ;

    //cout<< c <<endl;
return c;
}



int main() {
// Problem 1 test
    // Change value of 'pop' to change value you want to test
    int pop = 0;
    cout << "Given the initial population of " << pop;
    cout << " your estimation finds a population of ";
    cout << howMany(pop) << endl << endl;


    // Problem 2 test
    // Change value 'sec' to change value you want to test
    int sec = 0;
    cout << "Given the seconds value of " << sec;
    cout << " your output is: " << endl;
    howLong(sec);
    cout << endl;

    // Problem 3 test
    // Change value 'temp' to change value you want to test
    int temp = 0;
    cout << "Given temperature " << temp;
    cout << " degrees Celsius you calculate ";
    cout << howHot(temp) << " degrees Fahrenheit" << endl;

}








