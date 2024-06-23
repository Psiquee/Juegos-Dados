#pragma once

void menu();
int jugarRonda();
int jugarModoUnJugador(char nombre[], int puntajeMaxAnterior, char nombreMaxAnterior[]);
int jugarModoDosJugadores(char nombre1[], char nombre2[], char nombreMax2J ,int puntajeMaxAnterior, char nombreMaxAnterior[]);
void mostrarPuntajeMaximo(int puntajeMax, char nombreMax[],int puntajeMax2J, char nomMax2J);
void copiarVector(char v[], char v2[], int tam);


