// Author: Jared Konigsberg
//
// Assignment 3
// Problem 1

#include <math.h>
#include <iostream>
using namespace std;

float wind_chill;
float wind_chill1;
float low_wind_speed;
float high_wind_speed;
float wind_step_speed;

float windChillCalculator( float T1, float V1);
void printWindChill(float T, float low_wind_speed, float high_wind_speed, float wind_step_speed);

int main(){
float T;
float V;
    cout << "Input a Temperature: " << endl;
    cin >> T;
    cout << "Input a Wind Speed: " << endl;
    cin >> V;
        windChillCalculator( T,  V);

        cout << "The wind chill is " <<  windChillCalculator(T, V) << " degrees F." << endl;



    cout << "Input a low wind speed: "<< endl;
    cin >> low_wind_speed;
    cout << "Input a high wind speed: "<< endl;
    cin >> high_wind_speed;
    cout << "Input a wind step speed: "<< endl;
    cin >> wind_step_speed;


        printWindChill(T, low_wind_speed, high_wind_speed, wind_step_speed );
}

float windChillCalculator( float T1, float V1){


wind_chill = 35.74 + (.6215 * T1) - (35.75 * (pow(V1, .16))) + (.4275*(T1) * (pow(V1, .16)));


return wind_chill;
}


void printWindChill(float T3, float low_wind_speed, float high_wind_speed, float wind_step_speed){

float x = low_wind_speed;


while(x <= high_wind_speed ){
    windChillCalculator(T3, x);

   cout << "The wind chill is " << wind_chill << " degrees F for an air temperature of " << T3 << " degrees F" << " and a windspeed of " << x << " mph." << endl;

x = x + wind_step_speed;
}
































}

