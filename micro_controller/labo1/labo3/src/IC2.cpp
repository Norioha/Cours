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

DigitalIn btn1(P0_2);
DigitalIn btn2(P0_3);

InterruptIn button1(P0_0);
InterruptIn button2(P0_1);
DigitalOut myled(P0_18);
Ticker 	flipper;
DigitalOut myled(P0_0);
DigitalOut myled2(P0_1);

*/
I2C i2c(P0_0,P0_1);
int tab[10];

void exercice1(void) {

	// Choix de l'exercice. Rajouter des exercices si besoin, en gardant la même
	// syntaxe et en ecrivant la fonction correspondante avant le 'main'
	/*switch(exo) {
		case 1: exercice1(); break;
		default: printf("Bad exercice number !\n");
	}*/
	i2c.start();
	i2c.write(0x1C << 1);// slave address
	i2c.write(0x03);
	i2c.stop();


	i2c.start();
	i2c.write((0x1C << 1) + 1);
	uint8_t val = (uint8_t) i2c.read(1);
	i2c.stop();



	wait_ms(50);
}
BusOut Blue(P0_4,P0_5,P0_10,P0_11,P2_0,P2_1,P2_2,P2_3);
BusOut Green(P0_23,P0_24,P0_25,P0_26,P1_30,P1_31,P0_2,P0_3);
BusOut Red(P2_4,P2_5,P2_6,P2_7,P2_8,P2_10,P2_11,P2_12);
BusOut Rows(P0_9,P0_8,P0_7,P0_6,P0_0,P0_1,P0_18,P0_17);
void exercice2(){

	Blue = 0b11111111;
	Red = 0b11111111;
	Green = 0b11111111;
	Rows = 0b11111111;



 }

int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo = 2;

	while (true){
		switch(exo) {
			case 1: exercice1(); break;
			case 2: exercice2(); break;
			default: printf("Bad exercice number !\n");
		}
	}
}
