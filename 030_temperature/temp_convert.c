#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// °C = (°F - 32) × 5/9
// °F = (°C × 9/5) + 32
// T (K) = T (°C) + 273.15
// (T)K = 5/9 (T)F + 459.67
// Celsius = Kelvin - 273.15°
// °F = (K − 273.15) × 9/5 + 32

void toFahrenheit(float temp, char* argv[]){
    float fahrenheit;
    if(argv[1]=="Celcius"){
        fahrenheit = (temp * 9/5) + 32;
        printf("Celcius to Fahrenheit %f",fahrenheit);
    }
    else if(argv[1]=="Kelvin"){
        fahrenheit = (temp - 273.15) * 9/5 + 32;
        printf("kelvin to Fahrenheit %f",fahrenheit);
    }
}

void toKelvin(float temp, char* argv[]){
    float kelvin;
    if(argv[1]=="Celcius"){
        kelvin = temp + 273.15;
        printf("Celcius to kelvin %f",kelvin);
    }
    else if(argv[1]=="Fahrenheit"){
        kelvin = 5/9 * temp + 459.67;
        printf("fahrenheit to kelvin %f",kelvin);
    }
}

void toCelcius(float temp, char* argv[]){
    float celcius;
    if(argv[1]=="Kelvin"){
        celcius = temp - 273.15;
        printf("kelvin to celcius %f",celcius);

    }
    else if(argv[1]=="Fahrenheit"){
        celcius = (temp - 32) * 5/9;
        printf("fahrenheit to celcius %f",celcius);

    }
}


int main(int argc, char* argv[]){
    float temp = atof(argv[3]);
    
    if(argv[2]=="Fahrenheit"){
        toFahrenheit(temp,argv);
    }

    if(argv[2]=="Celcius"){
        toCelcius(temp,argv);    
    }

    if(argv[2]=="Kelvin"){
        toKelvin(temp,argv);
    }

    return EXIT_SUCCESS;

}