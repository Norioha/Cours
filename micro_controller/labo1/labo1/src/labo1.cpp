/*
 * labo1.cpp
 *
 *  Created on: 4 octobre 2019
 *      Author: Orphee Antoniadis
 */

#include "mbed.h"
/**
bool eteint = false;
bool clignote = false;
DigitalOut myled(P0_0);
DigitalOut myled2(P0_1);
DigitalIn btn1(P0_2);
DigitalIn btn2(P0_3);

void exercice1(void) {
	myled = 1;
	myled2 = 0;
	wait_ms(200);
	myled = 0;
	myled2 = 1;
	wait_ms(200);
}
void exercice2(void){
	if(!btn1){
		myled = 1;
		myled2= 1;
	}
	else{
		myled = 0;
		myled2= 0;
	}

}
void exercice3(){

	if(!btn1){
		clignote = true;
		eteint = false;
	}
	else if(!btn2){
		clignote = false;
		eteint = true;
	}

	if(eteint){
		myled = 0;
		myled2= 0;
	}
	else if(clignote){
		myled = 1;
		myled2= 1;
		wait_ms(100);
		myled = 0;
		myled2= 0;
		wait_ms(100);
	}

}
// 10 hz = 100 ms , 100 hz = 10ms; 1000hz = 1ms;
void exercice4(){
	myled2= 1;
	wait_ms(1);
	myled2= 0;
	wait_ms(1);
}
**/
InterruptIn button1(P0_0);
InterruptIn button2(P0_1);
DigitalOut myled(P0_18);
Ticker 	flipper;
// 2hz = 500ms
void flip(){
	myled = !myled;
}
void LedOn(){
	flipper.attach(&flip,0.5);
}

void LedOff(){
	myled = 0;
	flipper.detach();
}


void labo4(){

	button1.rise(&LedOn);
	button2.fall(&LedOff);
}
int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo =1;

	while(1) {
		// Choix de l'exercice. Rajouter des exercices si besoin, en gardant la même
		// syntaxe et en ecrivant la fonction correspondante avant le 'main'.
		switch(exo) {
		/**
			case 1: exercice1(); break;
			case 2: exercice2(); break;
			case 3: exercice3(); break;
			case 4: exercice4(); break;
			**/
			case 5: labo4(); break;
			default: printf("Bad exercice number !\n");
		}
	}
}
