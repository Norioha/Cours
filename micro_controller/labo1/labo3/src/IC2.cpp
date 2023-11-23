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

	i2c.start();
	i2c.write(0x1C << 1);// slave address
	i2c.write(0x00);
	i2c.stop();


	i2c.start();
	i2c.write((0x1C << 1) + 1);
	uint8_t val = (uint8_t) i2c.read(1);
	i2c.stop();
	//printf("%c",val);
	wait(50);
}

int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo = 1;
	i2c.stop();

	while(1) {
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
}
